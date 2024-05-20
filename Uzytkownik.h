#if !defined(_UZYTKOWNIK_H)
#define _UZYTKOWNIK_H


class Uzytkownik {
public:
	void otworzMenuDruzyny();
	void rozpocznijWalke();
	void otworzRanking();
	void otworzSklep();
private:
	string nazwa;
	int monety;
	string login;
	vector<Postac> odblokowanePostacie;
	vector<Druzyna> druzyny;
	int punktyRankingowe;
};

#endif  //_UZYTKOWNIK_H
