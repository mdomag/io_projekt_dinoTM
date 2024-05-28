#if !defined(_CHARACTERDATABASE_H)
#define _CHARACTERDATABASE_H

#include "Character.h"
#include <vector>
using namespace std;

class CharacterDataBase {
public:
    void showAllCharacters();
    vector<Character> characters = {
    Character(1, 100, "Tyrannosaurus", "TYR", 10, 50, 100),
    Character(2, 80, "Velociraptor", "VEL", 8, 40, 200),
    Character(3, 120, "Triceratops", "TRI", 12, 60, 300),
    Character(4, 90, "Stegosaurus", "STE", 9, 45, 400),
    Character(5, 110, "Brachiosaurus", "BRA", 11, 55, 50),
    Character(6, 95, "Ankylosaurus", "ANK", 13, 65, 10),
    Character(7, 85, "Pterodactyl", "PTR", 14, 70, 20),
    Character(8, 105, "Spinosaurus", "SPN", 15, 75, 40),
    Character(9, 115, "Compsognathus", "CMP", 16, 80, 111),
    Character(10, 125, "Dilophosaurus", "DLF", 17, 85, 100),
    Character(11, 135, "Parasaurolophus", "PSL", 18, 90, 90),
    Character(12, 145, "Mamenchisaurus", "MMH", 19, 95, 11),
    Character(13, 155, "Oviraptor", "OV", 20, 100, 90),
    Character(14, 165, "Protoceratops", "PTC", 21, 105, 11),
    Character(15, 175, "Styracosaurus", "STY", 22, 110, 11),
    Character(16, 185, "Torvosaurus", "TVS", 23, 115, 10),
    Character(17, 195, "Utahraptor", "UTA", 24, 120, 90),
    Character(18, 205, "Vulcanodon", "VLN", 25, 125, 90),
    Character(19, 215, "Xenotarsosaurus", "XNT", 26, 130, 120),
    Character(20, 225, "Zephyrosaurus", "ZPH", 27, 135, 125)
    };

};

#endif  //_CHARACTERDATABASE_H
