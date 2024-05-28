#include "Fight.h"
#include "PlayerDataBase.h"

void Fight::showMenu() {
    displayPlayersTeams();
    printf("choose the team you want to use [write index]: ");
    int option;
    scanf("%d", &option);
    playersTeam = player->teams[option];
    // printf("bot:\n");
    botTeam = generateOpponentsTeam();
    opponent = new Bot(botTeam);
    // botTeam.showInfo();
    
    printf("you chose team:\n"),
    playersTeam.showInfoFight();
    botTeam = generateOpponentsTeam();
    opponent = new Bot(botTeam);
    bool didPlayerWin = startFight();   
    if(didPlayerWin) {
        printf("you won\n");
        player->coins += 100;
        printf("you earned 100 coins\n");
        player->leaderboardPoints += 100;
        printf("you earned 100 ranking points\n");
    }
    else {
        printf("you lost!!!!!\n");
    }

}
void Fight::displayPlayersTeams() {
    int index = 0;
    for(auto team: player->teams) {
        printf("%d ", index);
        team.showInfoFight();
        index++;
    }
}

bool Fight::startFight() {
    int attacker;
    int victim;
    while(checkHP(playersTeam)) {
        
        printf("your team:\n");
        playersTeam.showInfoFight();
        printf("choose attacker\n");
        scanf("%d", &attacker);
        while(playersTeam.team[attacker].getHP() == 0) {
            printf("%s is already dead! choose another attacker\n", playersTeam.team[attacker].getName().c_str());
            printf("your team:\n");
            playersTeam.showInfoFight();
            printf("choose attacker\n");
            scanf("%d", &attacker);
        }
        
        printf("opponents team:\n");
        botTeam.showInfoFight();
        printf("choose victim\n");
        scanf("%d", &victim);
        int dmg = playersTeam.team[attacker].getDMG();
        botTeam.team[victim].setHP(dmg);
        printf("%s attacked %s dealing %d dmg\n", playersTeam.team[attacker].getName().c_str(), botTeam.team[victim].getName().c_str(), dmg) ;
        printf("opponents team after hit:\n");
        botTeam.showInfoFight();  
        if(!checkHP(botTeam)) {
            return true;
        }

        attacker = opponent->randomizeAttacker();
        while(botTeam.team[attacker].getHP() == 0) {
            attacker = opponent->randomizeAttacker();
        }
        victim = opponent->randomizeVictim();
        while(playersTeam.team[victim].getHP() == 0) {
            victim = opponent->randomizeVictim();
        }
        dmg = botTeam.team[attacker].getDMG();
        playersTeam.team[victim].setHP(dmg);
        printf("%s attacked %s dealing %d dmg\n", botTeam.team[victim].getName().c_str(), playersTeam.team[attacker].getName().c_str(), dmg);
    }
    return false;
}

void Fight::makeMove(int attacker, int victim) {

}

bool Fight::checkHP(Team team) {
    return team.getTeamHP();
}

void Fight::showResult() {

}


Team Fight::generateOpponentsTeam() {
    return Team("bot", {characterDB->characters[0], characterDB->characters[1], characterDB->characters[2], characterDB->characters[3]});
}

Bot* Fight::createBot() {
    return nullptr;
}

