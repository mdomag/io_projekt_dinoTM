#include "CharacterDataBase.h"
#include <cstdio>
void CharacterDataBase::showAllCharacters() {
    for (Character c : characters) {
        printf("%d %s cena: %d\n", c.getId(), c.getName().c_str(), c.getPrice());
    }
}


