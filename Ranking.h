#if !defined(_RANKING_H)
#define _RANKING_H

#include "RankingMenu.h"

#include "Uzytkownik.h"

#include <vector>

class Ranking : public RankingMenu {
public:
	void pokazTop10();
	void rozdajNagrody();
private:
	std::vector<Uzytkownik> listaRankingowaUzytkownikow;
};

#endif  //_RANKING_H
