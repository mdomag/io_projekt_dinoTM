#if !defined(_CHARACTER_H)
#define _CHARACTER_H

#include <string>
using namespace std;

class Character {
public:
    void showInfo();
    int getLevel();
    Character(int i, int h, string n, string c, int l, int d): id(i), hp(h), name(n), code(c), level(l), dmg(d) {}
private:
    int id;
    int hp;
    string name;
    string code;
    int level;
    int dmg;
};

#endif  //_CHARACTER_H
