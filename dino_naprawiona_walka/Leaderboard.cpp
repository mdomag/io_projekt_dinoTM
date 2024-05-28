#include "Leaderboard.h"
#include "PlayerDataBase.h"

#include <cstdio>
#include <algorithm>

using namespace std;

void Leaderboard::showTop() {
    sortPlayers();
    int n = playersLeaderboard.size() >= 10 ? 10 : playersLeaderboard.size();
    printf("top %d players: \n", n);
    for(int i = 0; i < n; i++){
        printf("%d: %d %s\n", i, playersLeaderboard[i]->leaderboardPoints, playersLeaderboard[i]->nick.c_str());
    }
}

void Leaderboard::sortPlayers() {
    auto comparePlayers = [](const Player* a, const Player* b) {
        return a->leaderboardPoints > b->leaderboardPoints;
    };
    sort(playersLeaderboard.begin(), playersLeaderboard.end(), comparePlayers);
}

void Leaderboard::showPlayerInfo() {

}

void Leaderboard::showInfo() {
    showTop();
}
