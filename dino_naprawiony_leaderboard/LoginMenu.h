#if !defined(_LOGINMENU_H)
#define _LOGINMENU_H


#include "PlayerDataBase.h"
#include "Player.h"

class LoginMenu {
public:
	virtual Player* showMenu() = 0;
};

#endif  //_LOGINMENU_H
