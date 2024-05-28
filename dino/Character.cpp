#include "Character.h"
#include <cstdio>
void Character::showInfo() {
    printf("name: %s hp: %d dmg: %d level: %d, retail price: %d\n", name.c_str(), hp, dmg, level, price);
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

int Character::getPrice()
{
    return this->price;
}

int Character::getHP()
{
    return hp;
}

int Character::getDMG()
{
    return dmg;
}

void Character::setHP(int dmg)
{
    hp -= dmg;
}
