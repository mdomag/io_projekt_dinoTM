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

    return 0;
}