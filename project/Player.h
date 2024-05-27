#if !defined(_PLAYER_H)
#define _PLAYER_H

//#include "LeaderboardMenu.h"
#include "TeamMenu.h"
#include "FightMenu.h"
#include "ShopMenu.h"
#include "Character.h"


#include <string>
using namespace std;

class Player {
public:
    int id;
    string password;
    string nick;
    vector<Character> unlockedCharacters;
    vector<Team> teams;
    int leaderboardPoints;
    int coins;
    void openTeamMenu();
    void openLeaderboardMenu();
    void openShopMenu();
    void openFightMenu();
    void showCharacters();
    void showInfo();
    //for logging and reading from database
    Player(int i, string p, string n, vector<Character> unlockedChar, vector<Team> t, int lp, int c) : id(i), password(p),
    nick(n), unlockedCharacters(unlockedChar), teams(t), leaderboardPoints(lp), coins(c) {}
    //for register
    Player(int i, string p, string n) : id(i), password(p), nick(n), unlockedCharacters({}), teams({}), leaderboardPoints(0), coins(0) {}
private:
    TeamMenu* teamMenu = nullptr;
    FightMenu* fightMenu = nullptr;
    ShopMenu* shopMenu = nullptr;
    //LeaderboardMenu* leaderboardMenu = nullptr;
};

#endif  //_PLAYER_H