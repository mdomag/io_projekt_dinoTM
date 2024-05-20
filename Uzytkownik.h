#if !defined(_UZYTKOWNIK_H)
#define _UZYTKOWNIK_H

#include "Postac.h"
#include "Druzyna.h"

#include <string>
#include <vector>

class Uzytkownik {
public:
	void otworzMenuDruzyny();
	void rozpocznijWalke();
	void otworzRanking();
	void otworzSklep();
private:
	std::string nazwa;
	int monety;
	std::string login;
	std::vector<Postac> odblokowanePostacie;
	std::vector<Druzyna> druzyny;
	int punktyRankingowe;
	int id;
	std::string password;
};

#endif  //_UZYTKOWNIK_H
