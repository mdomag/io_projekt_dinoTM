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
    vector<Player*> players = {
        new Player(1, "pass1", "binbon", {}, {}, 100, 50),
        new Player(2, "pass2", "goryl", {}, {}, 200, 75),
        new Player(3, "pass3", "kitus_bajdus", {}, {}, 300, 100),
        new Player(4, "pass4", "jadwyga_hymel", {}, {}, 400, 125),
        new Player(5, "pass5", "syn", {}, {}, 459, 150),
        new Player(6, "pass6", "xxxxxx", {}, {}, 500, 175),
        new Player(7, "pass7", "jarek", {}, {}, 700, 200),
        new Player(8, "pass8", "pitek", {}, {}, 8000, 225),
        new Player(9, "pass9", "yyyy", {}, {}, 900, 250),
        new Player(10, "pass10", "Nick10", {}, {}, 1000, 275)};
};

#endif  //_PLAYERDATABASE_H
