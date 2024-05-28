#if !defined(_FIGHT_H)
#define _FIGHT_H

#include "FightMenu.h"
#include "Team.h"
#include "Bot.h"
#include "Player.h"
#include "PlayerDataBase.h"

class Fight : public FightMenu {
public:
    void displayPlayersTeams() override;
    bool startFight() override;
    void makeMove(int attacker, int victim);
    bool checkHP();
    void showResult();
    void showMenu() override;
    Team generateOpponentsTeam();
    Bot* createBot();
    Fight(Player* p, CharacterDataBase* cDB) : player(p), characterDB(cDB) {}
private:
    Bot* opponent = nullptr;
    Team playersTeam = Team();
    Player* player = nullptr;
    CharacterDataBase* characterDB = nullptr;
    Team botTeam = Team();
};

#endif  //_FIGHT_H
