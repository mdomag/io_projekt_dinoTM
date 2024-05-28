#if!defined(_TEAMMENU_H)
#define _TEAMMENU_H

#include "Team.h"

class TeamMenu {
public:
    Team createTeam(string n);
    void deleteTeam(string n);
    void modifyTeam(string n);
    void showTeams();
    void showMenu();
    TeamMenu() {}
};

#endif  //_TEAMMENU_H
