#if !defined(_PLAYERDATABASE_H)
#define _PLAYERDATABASE_H

#include "LoginMenu.h"
#include "Player.h"

#include <string>
#include <cstdio>

using namespace std;

class PlayerDataBase {
public:
    bool checkUserExists(string nick);
    void addPlayer(Player* player);
    Player* checkPassword(string nick, string password);
    vector<Player *> getPlayers();
    int getPlayersSize();
private:
    vector<Player*> players = {
        new Player(1, "pass1", "binbon", {Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 100, 50),
        new Player(2, "pass2", "goryl", {Character(17, 195, "Utahraptor", "UTA", 24, 120),Character(18, 205, "Vulcanodon", "VLN", 25, 125),Character(19, 215, "Xenotarsosaurus", "XNT", 26, 130),Character(20, 225, "Zephyrosaurus", "ZPH", 27, 135)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 200, 75),
        new Player(3, "pass3", "kitus_bajdus", {Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85),Character(11, 135, "Parasaurolophus", "PSL", 18, 90),Character(12, 145, "Mamenchisaurus", "MMH", 19, 95)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 300, 100),
        new Player(4, "pass4", "jadwyga_hymel", {Character(12, 145, "Mamenchisaurus", "MMH", 19, 95),Character(13, 155, "Oviraptor", "OV", 20, 100),Character(14, 165, "Protoceratops", "PTC", 21, 105),Character(15, 175, "Styracosaurus", "STY", 22, 110)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 400, 125),
        new Player(5, "pass5", "syn", {Character(5, 110, "Brachiosaurus", "BRA", 11, 55),Character(6, 95, "Ankylosaurus", "ANK", 13, 65),Character(7, 85, "Pterodactyl", "PTR", 14, 70),Character(8, 105, "Spinosaurus", "SPN", 15, 75)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 459, 150),
        new Player(6, "pass6", "xxxxxx", {Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(3, 120, "Triceratops", "TRI", 12, 60),Character(4, 90, "Stegosaurus", "STE", 9, 45),Character(5, 110, "Brachiosaurus", "BRA", 11, 55)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 500, 175),
        new Player(7, "pass7", "jarek", {Character(16, 185, "Torvosaurus", "TVS", 23, 115),Character(17, 195, "Utahraptor", "UTA", 24, 120),Character(18, 205, "Vulcanodon", "VLN", 25, 125),Character(19, 215, "Xenotarsosaurus", "XNT", 26, 130)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 700, 200),
        new Player(8, "pass8", "pitek", {Character(10, 125, "Dilophosaurus", "DLF", 17, 85),Character(11, 135, "Parasaurolophus", "PSL", 18, 90),Character(12, 145, "Mamenchisaurus", "MMH", 19, 95),Character(13, 155, "Oviraptor", "OV", 20, 100)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 8000, 225),
        new Player(9, "pass9", "yyyy", {Character(11, 135, "Parasaurolophus", "PSL", 18, 90),Character(12, 145, "Mamenchisaurus", "MMH", 19, 95),Character(13, 155, "Oviraptor", "OV", 20, 100),Character(14, 165, "Protoceratops", "PTC", 21, 105)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 900, 250),
        new Player(10, "pass10", "Nick10", {Character(8, 105, "Spinosaurus", "SPN", 15, 75),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85),Character(11, 135, "Parasaurolophus", "PSL", 18, 90)}, {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85)})}, 1000, 275)};
};

#endif  //_PLAYERDATABASE_H
