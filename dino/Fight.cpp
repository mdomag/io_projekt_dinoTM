#include "Fight.h"

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
    playersTeam.showInfo();
    botTeam = generateOpponentsTeam();
    opponent = new Bot(botTeam);
    bool didPlayerWin = startFight();   
    if(didPlayerWin) {
        printf("you won\n");
        player->coins += 100;
        printf("you earned 100 coins\n");
    }
    else {
        printf("you lost!!!!!\n");
    }

}
void Fight::displayPlayersTeams() {
    int index = 0;
    for(auto team: player->teams) {
        printf("%d ", index);
        team.showInfo();
        index++;
    }
}

bool Fight::startFight() {
    while(checkHP()) {
        int attacker;
        printf("your team:\n");
        playersTeam.showInfo();
        printf("choose attacker\n");
        scanf("%d", &attacker);
        int victim;
        printf("opponents team:\n");
        botTeam.showInfo();
        printf("choose victim\n");
        scanf("%d", &victim);
        makeMove(attacker, victim);
        int dmg = playersTeam.team[attacker].getDMG();
        botTeam.team[victim].setHP(dmg);
        printf("%s attacked %s dealing %d dmg\n", playersTeam.team[attacker].getName().c_str(), botTeam.team[victim].getName().c_str(), dmg) ;
        printf("opponents team after hit:\n");
        botTeam.showInfo();  
        if(!checkHP()) {
            return true;
        }
        attacker = opponent->randomizeAttacker();
        victim = opponent->randomizeVictim();
        dmg = botTeam.team[attacker].getDMG();
        playersTeam.team[victim].setHP(dmg);
        printf("%s attacked %s dealing %d dmg\n", botTeam.team[victim].getName().c_str(), playersTeam.team[attacker].getName().c_str(), dmg);
    }
    return false;
}

void Fight::makeMove(int attacker, int victim) {

}

bool Fight::checkHP() {
    for(auto character: playersTeam.team) {
        if(character.getHP() <= 0)
        return false;
    }
    for(auto character: botTeam.team) {
        if(character.getHP() <= 0)
        return false;
    }
    return true;

}

void Fight::showResult() {

}


Team Fight::generateOpponentsTeam() {
    return Team("bot", {characterDB->characters[0], characterDB->characters[1], characterDB->characters[2], characterDB->characters[3]});
}

Bot* Fight::createBot() {
    return nullptr;
}

