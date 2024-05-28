#if !defined(_TEAM_H)
#define _TEAM_H

#include "Character.h"
#include <string>
#include <vector>
using namespace std;

class Team {
public:
    vector<Character> team;
    Team(const Team& other) 
        : name(other.name), 
          team(other.team), 
          level(other.level), 
          charactersCount(other.charactersCount) {}

    void changeName(string name);
    void change();
    int getTeamSize();
    void showInfo();
    int getTeamHP();
    void showInfoFight();
    vector<Character> getTeamVector;
    Team(string n): name(n) {}
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
    
    string name;
    int level;
    int charactersCount;
};

#endif  //_TEAM_H


