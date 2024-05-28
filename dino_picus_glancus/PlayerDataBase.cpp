#include "PlayerDataBase.h"
#include "Player.h"
#include <iostream>
#include <string>

bool PlayerDataBase::checkUserExists(string nick)
{
    for (auto player : players) {
        if (player->nick == nick) {
            return true;
        }
    }
    return false;
}

void PlayerDataBase::addPlayer(Player* player) {
    players.push_back(player);
}

Player* PlayerDataBase::checkPassword(string nick, string password) {
    for (auto player : players) {
        if (player->nick == nick && player->password == password) {
            return player;
        }
    }
    return nullptr;
}

vector<Player*> PlayerDataBase::getPlayers() {
    return players;
}

int PlayerDataBase::getPlayersSize()
{
    return players.size();
}


