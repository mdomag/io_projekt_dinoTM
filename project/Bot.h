#if !defined(_BOT_H)
#define _BOT_H


#include "Team.h"
#include <string>
using namespace std;
class Bot {
public:
    Bot(Team t) : team(t) {
        this->size = t.getTeamSize();
    }
    int randomizeAttacker();
    int randomizeVictim();
private:
    string nick;
    Team team;
    int size;
};

#endif  //_BOT_H
