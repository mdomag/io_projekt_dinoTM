#if!defined(_TEAMMENU_H)
#define _TEAMMENU_H

#include "Team.h"

class TeamMenu {
public:
    Team createTeam(string n);
    void deleteTeam();
    void modifyTeam();
    void showTeams();
    void showMenu();
};

#endif  //_TEAMMENU_H
