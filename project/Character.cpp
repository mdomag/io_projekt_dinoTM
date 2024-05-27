#include "Character.h"
#include <cstdio>
void Character::showInfo() {
    printf("name: %s hp: %d dmg: %d level: %d\n", name.c_str(), hp, dmg, level);
}

