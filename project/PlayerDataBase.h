#if !defined(_PLAYERDATABASE_H)
#define _PLAYERDATABASE_H

#include "LoginMenu.h"
#include "Player.h"

#include <string>
#include <cstdio>

using namespace std;

class PlayerDataBase {
public:
    bool checkUserExists(string nick);
    void addPlayer(Player* player);
    Player* checkPassword(string nick, string password);
    vector<Player *> getPlayers();
    int getPlayersSize();
private:
    vector<Player*> players;
};

#endif  //_PLAYERDATABASE_H
