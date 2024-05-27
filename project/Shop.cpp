#include "Shop.h"
#include <ctime>
#include <cstdlib>
#include <cstdio>

void Shop::buyCharacter(int character) {

}

void Shop::enterCharacterCode(string code) {

}

void Shop::showMenu() {
    printf("shop inventory:\n");
    for(auto character: inventory) {
        character.showInfo();
    }
}

Shop::Shop(CharacterDataBase *characterDB) {
    int n = characterDB->characters.size();
    srand(time(0));
    int r = rand() % n; //generates 0-n-1
    for(int i = 0; i < 5; i++) {
        inventory.push_back(characterDB->characters[(i+r)%n]);
    }
}

