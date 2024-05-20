#if !defined(_POSTAC_H)
#define _POSTAC_H

#include <string>
#include <vector>
class Postac {
public:
	std::string wyswietlSzczegoly();
	std::string nazwa;
private:
	
	int hp;
	std::string opis;
	int cena;
	int dmg;
	std::vector<std::string> kody;
	int poziom;
};

#endif  //_POSTAC_H
