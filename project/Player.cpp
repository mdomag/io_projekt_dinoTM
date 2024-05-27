#include "Player.h"
#include <cstdio>

void Player::openTeamMenu() {

}

void Player::openLeaderboardMenu() {

}

void Player::openShopMenu() {

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
