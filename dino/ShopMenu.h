#if !defined(_SHOPMENU_H)
#define _SHOPMENU_H
#include "Character.h"

#include <string>
using namespace std;

class ShopMenu {
public:
    virtual void buyCharacter() = 0;
    virtual void enterCharacterCode() = 0;
    virtual void showMenu() = 0;
};



#endif  //_SHOPMENU_H
