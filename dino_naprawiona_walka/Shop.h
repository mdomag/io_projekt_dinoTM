#if !defined(_SHOP_H)
#define _SHOP_H

#include "ShopMenu.h"
#include "Character.h"
#include "CharacterDataBase.h"
#include "Player.h"

#include <vector>
using namespace std;
class Shop : public ShopMenu {
public:
    void buyCharacter() override;
    void enterCharacterCode() override;
    Shop(CharacterDataBase *characterDB, Player* player);
    void showMenu() override;
private:
    vector<Character> inventory;
    Player* player;
    vector<Character> allCharacters;
};

#endif  //_SHOP_H
