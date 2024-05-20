#if !defined(_DRUZYNA_H)
#define _DRUZYNA_H

#include "Postac.h"

#include <vector>
#include <string>

class Druzyna {
public:
	int poziom();
	void zmienNazwe(std::string nazwa);
	void zmienSklad();
	void wybierzDruzyneGlowna();
private:
	std::string nazwa;
	int hp;
	std::vector<Postac> druzyna;
};

#endif  //_DRUZYNA_H
