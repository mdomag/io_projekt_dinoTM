#if !defined(_LEADERBOARD_H)
#define _LEADERBOARD_H

#include "LeaderboardMenu.h"
#include "PlayerDataBase.h"

class Leaderboard : public LeaderboardMenu {
public:
    void showTop();
    void sortPlayers();
    void showPlayerInfo();
    void showInfo() override;
    Leaderboard(PlayerDataBase playerDB): playersLeaderboard(playerDB.getPlayers()) {}

private:
    vector <Player*> playersLeaderboard;
};

#endif  //_LEADERBOARD_H
