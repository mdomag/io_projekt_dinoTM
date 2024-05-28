#if!defined(_LEADERBOARDMENU_H)
#define _LEADERBOARDMENU_H

class Player;

#include "PlayerDataBase.h"
#include <vector>

using namespace std;


class LeaderboardMenu {
public:
    virtual void showInfo() = 0; 
private:
    vector<Player*> playersLeaderboard;
};

#endif  //_LEADERBOARDMENU_H
