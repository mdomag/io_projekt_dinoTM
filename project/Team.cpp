#include "Team.h"

void Team::changeName(string name) {
    this->name = name;
}

void Team::change() {
    
}

void Team::showInfo() {
    printf("Team name: %s\n", name.c_str());
    for(Character character: team) {
        character.showInfo();
    }
    printf("Team level: %d\n", level);


int Team::getTeamSize() {
    return team.size();

}
