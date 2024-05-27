#if !defined(_SHOP_H)
#define _SHOP_H

#include "ShopMenu.h"
#include "Character.h"

#include <vector>
using namespace std;
class Shop : public ShopMenu {
public:
    Character buyCharacter(int character) override;
    Character enterCharacterCode(string code) override;
    void showMenu(Player* player) override;
    vector<Character> generateInventory();
private:
    vector<Character> inventory;
};

#endif  //_SHOP_H
