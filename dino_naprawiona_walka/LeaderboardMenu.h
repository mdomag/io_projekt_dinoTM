#if!defined(_LEADERBOARDMENU_H)
#define _LEADERBOARDMENU_H

#include "PlayerDataBase.h"
#include "Player.h"
#include <vector>

using namespace std;

class LeaderboardMenu {
public:
    virtual void showInfo() = 0; 
private:
    vector<Player*> playersLeaderboard;
};

#endif  //_LEADERBOARDMENU_H
