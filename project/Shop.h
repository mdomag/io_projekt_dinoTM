#if !defined(_SHOP_H)
#define _SHOP_H

#include "ShopMenu.h"
#include "Character.h"
#include "CharacterDataBase.h"

#include <vector>
using namespace std;
class Shop : public ShopMenu {
public:
    void buyCharacter(int character) override;
    void enterCharacterCode(string code) override;
    void showMenu() override;
    Shop(CharacterDataBase* characterDB);
private:
    vector<Character> inventory;
};

#endif  //_SHOP_H
