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
    printf("welcome to dinoTM!\n");
    printf("               __\n              / _)\n     _.----._/ /\n    /         /\n __/ (  | (  |\n/__.-'|_|--|_|\n\n\n");
    PlayerDataBase* playerDB = new PlayerDataBase();
    CharacterDataBase* charactersDB = new CharacterDataBase();
    LoginMenu* loginMenu = new Login(playerDB, charactersDB);
    Player* currentPlayer = loginMenu->showMenu();
    //currentPlayer->characterDB = charactersDB; //MUSI TUTAJ BYC
            
    if(currentPlayer != nullptr) {
        int option = 1;
        while(option) {
            printf("choose option\n[1] open team menu\n[2] open shop\n[3] start fight\n[4] view unlocked characters\n[5] show leaderboard\n[0] exit\n");
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
            else if(option == 5) {
                currentPlayer->openLeaderboardMenu();
            }
            else {
                    cout << "  *                               *     _\n";
                    cout << "       /\\     *            ___.       /  `) -----option not found......\n";
                    cout << "   *  //\\\\    /\\          ///\\\\      / /\n";
                    cout << "     ///\\\\\\  //\\\\/\\      ////\\\\\\    / /     /\\\n";
                    cout << "    ////\\\\\\\\///\\\\/\\\\.-~~-.///\\\\\\\\  / /     //\\\\\n";
                    cout << "   /////\\\\\\\\///\\\\/         `\\\\\\\\\\\\/ /     ///\\\\\n";
                    cout << "  //////\\\\\\\\// /            `\\\\\\\\/ /     ////\\\\\n";
                    cout << " ///////\\\\\\\\\\//               `~` /\\    /////\\\\\n";
                    cout << "////////\\\\\\\\\\/      ,_____,   ,-~ \\\\\\__//////\\\\\\\n";
                    cout << "////////\\\\\\\\/  /~|  |/////|  |\\\\\\\\\\\\\\\\ // /   \\\\\n";
                    cout << "//<           / /|__|/////|__|///////~|~/////  \\\\\n";
                    cout << "\n";       
                    cout << "~~~     ~~   ` ~   ..   ~  ~    .     ~` `   '.\n";
                    cout << "~ _  -  -~.    .'   .`  ~ .,    '.    ~~ .  '.\n";
            }
        }
    }
    printf("ending game... logging out....\n");
    cout << "        ,\n";
    cout << "       /|\n";
    cout << "      / |\n";
    cout << "     /  /\n";
    cout << "    |   |\n";
    cout << "   /    |\n";
    cout << "   |    \\_\n";
    cout << "   |      \\__\n";
    cout << "   \\       __\\_______\n";
    cout << "    \\                 \\_\n";
    cout << "    | /                 \\\n";
    cout << "    \\/                   \\\n";
    cout << "     |                    |\n";
    cout << "     \\                   \\|\n";
    cout << "     |                    \\\n";
    cout << "     \\                     |\n";
    cout << "     /\\    \\_               \\\n";
    cout << "    / |      \\__ (   )       \\\n";
    cout << "   /  \\      / |\\\\  /       __\\____\n";
    cout << "   |  ,     |  /\\ \\ \\__    |       \\_\n";
    cout << "   \\_/|\\___/   \\   \\}}}\\__|  (@)     )\n";
    cout << "    \\)\\)\\)      \\_\\---\\   \\|       \\ \\\n";
    cout << "                  \\>\\>\\>   \\   /\\__o_o)\n";
    cout << "                            | /  VVVVV\n";
    cout << "                            \\ \\    \\\n";
    cout << "                             \\ \\MMMMM                  BUY OUR CEREAL OR DIE!\n";
    cout << "                              \\______/         _____ /\n";
    cout << "                                              |  O O|\n";
    cout << "                                             /___|_|/\\_\n";
    cout << "                                        ==( |          |\n";
    cout << "                                             (o)====(o)\n";

    
    delete playerDB;
    delete charactersDB;
    delete loginMenu;
    delete currentPlayer;

    return 0;
}