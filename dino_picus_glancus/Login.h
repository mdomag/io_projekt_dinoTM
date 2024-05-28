#if !defined(_LOGIN_H)
#define _LOGIN_H

#include "LoginMenu.h"
#include "PlayerDataBase.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Login : public LoginMenu {
public:
	Player* registerPlayer();
	Player* login();
	Player* showMenu();
	Login(PlayerDataBase* pDB, CharacterDataBase* cDB) : playersDB(pDB), charactersDB(cDB) {}
private:
	PlayerDataBase* playersDB;
	CharacterDataBase* charactersDB;
};

#endif  //_LOGIN_H
