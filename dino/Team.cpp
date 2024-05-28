#include "Team.h"

void Team::changeName(string name) {
    this->name = name;
}

void Team::change() {
    
}

void Team::showInfo() {
    printf("team name: %s\n", name.c_str());
    for(Character character: team) {
        character.showInfo();
    }
    printf("team level: %d\n", level);

}
int Team::getTeamSize() {
    return team.size();

}

