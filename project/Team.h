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
    Team(string n, vector<Character> characters){
        name = n;
        team = characters;
        charactersCount = characters.size();
        
        int level_sum = 0;
        for (Character c : characters){
            level_sum+=c.getLevel();
        }
        level = level_sum/charactersCount;
    }
    Team() {}
private:
    vector<Character> team;
    string name;
    int level;
    int charactersCount;
};

#endif  //_TEAM_H


