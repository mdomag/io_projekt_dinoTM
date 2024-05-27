#include "Character.h"
#include <cstdio>
void Character::showInfo() {
    printf("name: %s hp: %d dmg: %d level: %d\n", name.c_str(), hp, dmg, level);
}

int Character::getLevel(){
    return this->level;
}

std::string Character::getName(){
    return this->name;
}

int Character::getId(){
    return this->id;
}

std::string Character::getCode(){
    return this->code;
}

