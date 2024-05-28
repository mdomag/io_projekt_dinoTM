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
    LoginMenu* loginMenu = new Login(playerDB);
    Player* currentPlayer = loginMenu->showMenu();
    printf("showing players:\n");
    vector<Player*> players = playerDB->getPlayers();
    for(auto player: players) {
        player->showInfo();
    }
    LeaderboardMenu* leaderBoard = new Leaderboard(playerDB);
    leaderBoard->showInfo();

    bool loggedIn = true;
    while(loggedIn){
        printf("\n1. Battle\n2. Shop\n4. Open team menu\n5. Show characters\n6. Logout\n");
        int input;
        std::cin>>input;
        if(input==1)
        {
            currentPlayer->openFightMenu();
        }
        else if(input==2){
            currentPlayer->openShopMenu();
        }
        else if(input==4){
            currentPlayer->openTeamMenu();
        }
        else if(input==5){
            currentPlayer->showCharacters();
        }
        else
        {
            loggedIn = false;
            break;
        }

    }

    return 0;
}
