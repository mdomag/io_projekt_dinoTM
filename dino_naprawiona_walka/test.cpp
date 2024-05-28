#include "Bot.h"
#include "Character.h"
#include "CharacterDataBase.h"
#include "Fight.h"
#include "FightMenu.h"
#include "Leaderboard.h"
#include "LeaderboardMenu.h"
#include "LoginMenu.h"
#include "Player.h"
#include "PlayerDataBase.h"
#include "Shop.h"
#include "ShopMenu.h"
#include "Team.h"
#include "TeamMenu.h"
#include "Login.h"

#include <cstdio>

int main() {
    PlayerDataBase* playerDB = new PlayerDataBase();
    CharacterDataBase* charactersDB = new CharacterDataBase();
    LoginMenu* loginMenu = new Login(playerDB, charactersDB);
    Player* currentPlayer = loginMenu->showMenu();
    //currentPlayer->characterDB = charactersDB; //MUSI TUTAJ BYC

    int option = 1;
    while(option) {
        printf("choose option\n[1] open team menu\n[2] open shop\n[3] start fight\n[4] view unclocked characters\n[0] exit\n");
        scanf("%d", &option);
        if(option == 1) {
            currentPlayer->openTeamMenu();
        }
        else if(option == 2) {
            currentPlayer->openShopMenu();
        }
        else if(option == 3) {
            currentPlayer->openFightMenu();
        }
        else if(option == 4) {
            currentPlayer->showCharacters();
        }
    }
    printf("ending game... logging out....\n");
    
    delete playerDB;
    delete charactersDB;
    delete loginMenu;
    delete currentPlayer;

    return 0;
}