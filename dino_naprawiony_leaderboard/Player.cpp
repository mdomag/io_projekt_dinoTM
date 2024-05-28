#include "Player.h"
#include <cstdio>
#include <iostream>
#include "Shop.h"
#include "Fight.h"
#include "Leaderboard.h"
#include "PlayerDataBase.h"
using namespace std;
void Player::openTeamMenu() { //tutaj implementacja bo z include "TeamMenu.h" wpada w szalone kolo z includami <3 kocham cpp!!!!!!
    
    printf("[0]view your teams\n[1] create team\n[2] exit\n");
    int option;
    scanf("%d", &option);
    cin.ignore();
    if(!option) {
        printf("your current teams: \n");
        for(auto team: teams) {
            team.showInfo();
        }
    }
    else if(option == 1) {
        string name;
        printf("write name: ");
        getline(cin, name);
        printf("your characters\n");
        int index = 0;
        for(auto character: unlockedCharacters) {
            printf("%d ", index);
            character.showInfo();
            index++;
        }
        int i1, i2, i3, i4;
        printf("choose 4 indexes to create a team ");
        scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
        teams.push_back(Team(name, {unlockedCharacters[i1], unlockedCharacters[i2], unlockedCharacters[i3], unlockedCharacters[i4]}));
        printf("created a new team\n");
        printf("your current teams: \n");
        for(auto team: teams) {
            team.showInfo();
        }
    }
}

void Player::openLeaderboardMenu()
{
    if(leaderboardMenu == nullptr){
        leaderboardMenu = new Leaderboard(playerDB, this);
    }
    leaderboardMenu->showInfo();
}

void Player::openShopMenu() {
    if(shopMenu == nullptr) {
        shopMenu = new Shop(characterDB, this);
    }
    shopMenu->showMenu();
}

void Player::openFightMenu() {
    if(fightMenu == nullptr) {
        fightMenu = new Fight(this, characterDB);
    }
    fightMenu->showMenu();
}

void Player::showCharacters() {
    printf("your characters:\n");
    for(Character character: unlockedCharacters) {
        character.showInfo();
    }
}

void Player::showInfo()
{
    printf("name: %s, id: %d, password: %s, coins: %d\n", nick.c_str(), id, password.c_str(), coins);
}
