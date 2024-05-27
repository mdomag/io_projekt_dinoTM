#if !defined(_TEAM_H)
#define _TEAM_H

#include "Character.h"
#include <string>
#include <vector>
using namespace std;

class Team {
public:
    void changeName(string name);
    void change();
    void showInfo() {}
    Team(string n): name(n) {}
    Team() {}
private:
    vector<Character> team;
    string name;
    int level;
    int charactersCount;
};

#endif  //_TEAM_H
