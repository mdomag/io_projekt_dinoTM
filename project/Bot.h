#if !defined(_BOT_H)
#define _BOT_H


#include "Team.h"
#include <string>
using namespace std;
class Bot {
public:
    Bot(Team t) : team(t) {}
    int randomizeAttacker();
    int randomizeVictim();
private:
    string nick;
    Team team;
};

#endif  //_BOT_H
