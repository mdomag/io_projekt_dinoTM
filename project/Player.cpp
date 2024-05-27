#include "Player.h"
#include <cstdio>
#include "Shop.h"

void Player::openTeamMenu() {
    printf("your current team: \n");
    //
}

void Player::openLeaderboardMenu() {

}

void Player::openShopMenu() {
    Shop shop;
    shop.showMenu(this);
}

void Player::openFightMenu() {

}

void Player::showCharacters() {
    printf("your characters:\n");
    for(Character character: unlockedCharacters) {
        character.showInfo();
    }
}

void Player::showInfo()
{
    printf("name: %s, id: %d, password: %s, coins: %d\n", nick.c_str(), id, password.c_str(), coins);
}
