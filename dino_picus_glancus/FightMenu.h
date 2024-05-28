#if!defined(_FIGHTMENU_H)
#define _FIGHTMENU_H

class PlayerDataBase;

class FightMenu {
public:
    PlayerDataBase* playerDB = nullptr;
    virtual void displayPlayersTeams() = 0;
    virtual bool startFight() = 0;
    virtual void showMenu() = 0;
};

#endif  //_FIGHTMENU_H
