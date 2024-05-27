#if!defined(_TEAMMENU_H)
#define _TEAMMENU_H

#include "Team.h"

class TeamMenu {
public:
    Team createTeam(string n, Player* p);
    void deleteTeam(string n, Player* p);
    void modifyTeam(string n, Player* p);
    void showTeams(Player* p);
    void showMenu(Player* p);
};

#endif  //_TEAMMENU_H
