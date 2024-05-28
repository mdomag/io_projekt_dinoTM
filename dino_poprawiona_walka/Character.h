#if !defined(_CHARACTER_H)
#define _CHARACTER_H

#include <string>
using namespace std;

class Character {
public:
    void showInfo();
    int getLevel();
    std::string getName();
    int getId();
    std::string getCode();
    int getPrice();
    int getHP();
    int getDMG();
    void setHP(int dmg);
    Character(int i, int h, string n, string c, int l, int d, int p): id(i), hp(h), name(n), code(c), level(l), dmg(d), price(p) {}
private:
    int id;
    int hp;
    string name;
    string code;
    int level;
    int dmg;
    int price;
};

#endif  //_CHARACTER_H
