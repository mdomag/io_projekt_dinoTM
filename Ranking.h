#if !defined(_RANKING_H)
#define _RANKING_H

#include "RankingMenu.h"

class Ranking : public RankingMenu {
public:
	void pokazTop10();
	void rozdajNagrody();
private:
	vector<Uzytkownik> listaRankingowaUzytkownikow;
};

#endif  //_RANKING_H
