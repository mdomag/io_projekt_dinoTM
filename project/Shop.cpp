#include "Shop.h"
#include <ctime>
#include <cstdlib>
#include <cstdio>

void Shop::buyCharacter() {
    printf("shop inventory:\n");
    for(auto character: inventory) {
        character.showInfo();
    }
}

void Shop::enterCharacterCode() {

}

void Shop::showMenu() {
    int option;
    printf("buy character[0], enter character code[1], exit[2]: ");
    scanf("%d", option);
    if(!option) {
        buyCharacter();
    }
    else if(option == 1) {
        enterCharacterCode();
    }
    else {
        //jakos exit
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

