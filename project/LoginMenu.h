#if!defined(_LOGINMENU_H)
#define _LOGINMENU_H

#include <string>
#include "Player.h"
using namespace std;


class LoginMenu {
public:
    virtual Player* registerPlayer() = 0;
    virtual Player* login() = 0;
    virtual Player* showMenu() = 0;
};

#endif  //_LOGINMENU_H
