#if !defined(_LEADERBOARD_H)
#define _LEADERBOARD_H

#include "LeaderboardMenu.h"
#include "Player.h"

class Leaderboard : public LeaderboardMenu {
public:
    void showTop();
    void sortPlayers();
    void showPlayerInfo();
    void showInfo() override;
    Leaderboard(PlayerDataBase* playerDB, Player* p): playersLeaderboard(playerDB->getPlayers()), player(p) {}

private:
    vector <Player*> playersLeaderboard;
    Player* player = nullptr;
};

#endif  //_LEADERBOARD_H
