#if!defined(_FIGHTMENU_H)
#define _FIGHTMENU_H

class FightMenu {
public:
    virtual void displayPlayersTeams() = 0;
    virtual bool startFight(int selectedTeam) = 0;
    virtual void showMenu() = 0;
};

#endif  //_FIGHTMENU_H
