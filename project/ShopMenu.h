#if !defined(_SHOPMENU_H)
#define _SHOPMENU_H
#include "Character.h"

#include <string>
using namespace std;

class Player;

class ShopMenu {
public:
    virtual Character buyCharacter(int character) = 0;
    virtual Character enterCharacterCode(string code) = 0;
    virtual void showMenu(Player* player) = 0;
};


#endif  //_SHOPMENU_H
