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
    vector<Character> defaultCharacters = {Character(1, 100, "Tyrannosaurus", "TYR", 10, 50, 50), Character(2, 80, "Velociraptor", "VEL", 8, 40, 40),Character(9, 115, "Compsognathus", "CMP", 16, 80, 90),Character(10, 125, "Dilophosaurus", "DLF", 17, 85, 90)};
    vector<Team> defaultTeam =  {Team("Default team",{Character(1, 100, "Tyrannosaurus", "TYR", 10, 50, 90), Character(2, 80, "Velociraptor", "VEL", 8, 40, 90),Character(9, 115, "Compsognathus", "CMP", 16, 80, 80),Character(10, 125, "Dilophosaurus", "DLF", 17, 85, 85)})};
    vector<Player*> players = {
        new Player(1, "pass1", "binbon", defaultCharacters, defaultTeam, 100, 50000000),
        new Player(2, "pass2", "goryl", defaultCharacters, defaultTeam, 200, 75),
        new Player(3, "pass3", "kitus_bajdus", defaultCharacters, defaultTeam, 300, 100),
        new Player(4, "pass4", "jadwyga_hymel", defaultCharacters, defaultTeam, 400, 125),
        new Player(5, "pass5", "syn", defaultCharacters, defaultTeam, 459, 150),
        new Player(6, "pass6", "xxxxxx", defaultCharacters, defaultTeam, 500, 175),
        new Player(7, "pass7", "jarek", defaultCharacters, defaultTeam, 700, 200),
        new Player(8, "pass8", "pitek", defaultCharacters, defaultTeam, 8000, 225),
        new Player(9, "pass9", "yyyy", defaultCharacters, defaultTeam, 900, 250),
        new Player(10, "pass10", "Nick10", defaultCharacters, defaultTeam, 1000, 275)};
};

#endif  //_PLAYERDATABASE_H
