#if !defined(_SHOPMENU_H)
#define _SHOPMENU_H

#include <string>
using namespace std;

class ShopMenu {
public:
    virtual void buyCharacter(int character) = 0;
    virtual void enterCharacterCode(string code) = 0;
    virtual void showMenu() = 0;
};


#endif  //_SHOPMENU_H
