#include "Team.h"

void Team::changeName(string name) {

}

void Team::change() {

}
void Team::showInfo() {
    printf("Team name: %s\n", name.c_str());
    for(Character character: team) {
        character.showInfo();
    }
    printf("Team level: %d\n", level);
}
