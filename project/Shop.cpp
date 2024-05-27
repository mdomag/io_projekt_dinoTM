#include "Shop.h"
#include <cstdio>
#include <iostream>
#include "CharacterDataBase.h"
#include "Player.h"
Character Shop::buyCharacter(int character) {
    printf("Buying character nr %d\n",character);
    CharacterDataBase database;
    for (Character c : database.characters) {
        if(character==c.getId()){
            return c;
        }
    }
    return Character(1,1,"","",1,1);
}

Character Shop::enterCharacterCode(string code) {
    printf("Unlocking character nr %d\n",code);
    CharacterDataBase database;
    for (Character c : database.characters) {
        if(code==c.getCode()){
            return c;
        }
    }
    return Character(1,1,"","",1,1);
}

void Shop::showMenu(Player* player)
{
    printf("1. Buy characters\n2. Enter character code\n");
    int choice;
    std::cin>>choice;
    if (choice==1)
    {
        CharacterDataBase database;
        database.showAllCharacters();
        printf("Enter character ID: ");
        int choice;
        std::cin>>choice;
        printf("\n");
        Character c = this->buyCharacter(choice);
        player->unlockedCharacters.push_back(c);
    }
    else if(choice==2){
        printf("Enter code: ");
        std::string code;
        std::cin>>code;
        printf("\n");
        Character c = this->enterCharacterCode(code);
        player->unlockedCharacters.push_back(c);
    }

}

vector<Character> Shop::generateInventory() {
    return {};
}

