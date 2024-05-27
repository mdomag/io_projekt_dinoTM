#if !defined(_FIGHT_H)
#define _FIGHT_H

#include "FightMenu.h"
#include "Team.h"
#include "Bot.h"

class Fight : public FightMenu {
public:
    void displayPlayersTeams() override;
    bool startFight(int selectedTeam) override;
    void makeMove(int attacker, int victim);
    bool checkHP();
    void showResult();
    void showMenu() override;
    Team* generateOpponentsTeam();
    Bot* createBot();

private:
    Bot* opponent = nullptr;
    Team playersTeam = Team();
};

#endif  //_FIGHT_H
