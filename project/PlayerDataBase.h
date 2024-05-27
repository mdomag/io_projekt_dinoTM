#if !defined(_PLAYERDATABASE_H)
#define _PLAYERDATABASE_H

#include "LoginMenu.h"
#include "Player.h"

#include <string>
#include <cstdio>

using namespace std;

class PlayerDataBase : public LoginMenu {
public:
    Player* showMenu() override;
    bool checkUserExists(string nick);
    Player* registerPlayer() override;
    void addPlayer(Player* player);
    Player* login() override;
    Player* checkPassword(string nick, string password);
    vector<Player *> getPlayers();

private:
    vector<Player*> players;
};

#endif  //_PLAYERDATABASE_H
