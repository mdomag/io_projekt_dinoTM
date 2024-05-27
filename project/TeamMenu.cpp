#include "TeamMenu.h"
//oglnie to bym zrobila to na voida
Team TeamMenu::createTeam(string n, Player& player)
{
    for(auto it = player.teams.begin(); it != player.teams.end(); it++) {
        if(it->name == n) {
            printf("Team %s already exists\n", n.c_str());
            return nullptr; //?
        }
    }
    for(int i = 0; i < player.unlockedCharacters.length; i++) {
        printf("%d. ", i);
        player.unlockedCharacters[i].showInfo();
    }
    Team team(n);
    printf("Choose 4 characters: ");
    for(int i= 0; i < 3; i++) {
        int number;
        std::cin >> number;
        team.characters.push_back(player.unlockedCharacters[number]);
    }

    player.teams.push_back(Team(n));
    printf("Team %s created\n", n.c_str());
    return Team(n);
}

void TeamMenu::deleteTeam(string n, Player& player)
{
    for(auto it = player.teams.begin(); it != player.teams.end(); it++) {
        if(it->name == n) {
            player.teams.erase(it);
            printf("Team %s deleted\n", n.c_str());
            break;
        }
    }
    printf("Team %s not found\n", n.c_str());
}

void TeamMenu::modifyTeam(string n, Player& player)
{
    for(auto it = player.teams.begin(); it != player.teams.end(); it++) {
        if(it->name == n) {
            it->change();
            break;
        }
    }
    printf("Team %s not found\n", n.c_str());
}
{
    for(auto it = player.teams.begin(); it != player.teams.end(); it++) {
        if(it->name == n) {
            player.teams.erase(it);
            printf("Team %s deleted\n", n.c_str());
            break;
        }
    }
    printf("Team %s not found\n", n.c_str());
}

void TeamMenu::showTeams(Player& player)
{
//    for(const auto& team : player.teams) {
//        std::cout << "Team name: " << "//tu dac getter do nazwy" << std::endl;
//        for(const auto& character : team.team) {
//            character.showInfo();
//        }
//    }
    for(auto it = player.teams.begin(); it != player.teams.end(); it++) {
        it->showInfo();
    }
}

void TeamMenu::showMenu()
{
    printf("create team[0], delete team[1], modify team[2], show teams[3], exit[4]\n");
    int option;
    string teamName;
    scanf("%d", &option);
    switch(option) {
        case 0:
            printf("Enter new team name: ");
            std::cin >> teamName;
            createTeam(teamName);
            break;
        case 1:
            printf("Enter team name to delete: ");
            std::cin >> teamName;
            deleteTeam(teamName);
            break;
        case 2:
            printf("Enter team name to modify: ");
            std::cin >> teamName;
            modifyTeam(teamName);
            break;
        case 3:
            showTeams();
            break;
        case 4:
            break;
        default:
            break;
    }
}
