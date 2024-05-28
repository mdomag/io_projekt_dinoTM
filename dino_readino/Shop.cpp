#include "Shop.h"
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

void Shop::buyCharacter() {
    printf("shop inventory:\n");
    int index = 0;
    for(auto character: inventory) {
        printf("%d ", index);
        character.showInfo();
        index++;
    }
    int option;
    printf("you have %d coins\n", player->coins);
    printf("choose a character to buy: ");
    scanf("%d", &option);
    if(player->coins >= inventory[option].getPrice()) {
        player->coins -= inventory[option].getPrice();
        printf("you payed %d coins, you have now %d coins\n", inventory[option].getPrice(), player->coins);
        player->unlockedCharacters.push_back(inventory[option]);
        printf("added character to your collection\n");
    }
    else {
        printf("not enough coins!\n");
    }
}

void Shop::enterCharacterCode() {
    string code;
    printf("enter character code..\n");
    getline(cin, code);
    for(auto character: allCharacters) {
        if(character.getCode() == code) {
            player->unlockedCharacters.push_back(character);
            printf("added character to your collection\n");
            return;
        }
    }
    printf("wrong character code\n");
}

void Shop::showMenu() {
    int option;
    printf("[0] buy character\n[1] enter character code\n[2] exit\n");
    scanf("%d", &option);
    cin.ignore();
    if(!option) {
        printf("buy character\n");
        buyCharacter();
    }
    else if(option == 1) {
        enterCharacterCode();
    }
}

Shop::Shop(CharacterDataBase *characterDB, Player* player) {
    
    this->player = player;
    
    int n = characterDB->characters.size();
    srand(time(0));
    int r = rand() % n; //generates 0-n-1
    for(int i = 0; i < 5; i++) {
        inventory.push_back(characterDB->characters[(i+r)%n]);
    }
    this->allCharacters = characterDB->characters;
}

