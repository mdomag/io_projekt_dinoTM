#include "Leaderboard.h"
#include "PlayerDataBase.h"

#include <cstdio>
#include <algorithm>

using namespace std;

void Leaderboard::showTop() {
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
    printf("your leadeboard points: %d\n", player->leaderboardPoints);
    int position = 0;
    for(auto p: playersLeaderboard) {
        if(p->nick.c_str() == player->nick.c_str()) {
            break;
        }
        position++;
        
    }
    printf("your position in the ranking: %d\n", position);
}

void Leaderboard::showInfo() {
    sortPlayers();
    showPlayerInfo();
    showTop();
}
