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

int main() {
    LoginMenu* loginMenu = new PlayerDataBase();
    Player* currentPlayer = loginMenu->showMenu();
    currentPlayer->showInfo();
    currentPlayer->showCharacters();
    return 0;
}