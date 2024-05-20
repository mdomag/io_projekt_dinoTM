#if !defined(_DRUZYNA_H)
#define _DRUZYNA_H


class Druzyna {
public:
	int poziom();
	void zmienNazwe(string nazwa);
	void zmienSklad();
	void wybierzDruzyneGlowna();
private:
	string nazwa;
	int hp;
	vector<Postac> druzyna;
};

#endif  //_DRUZYNA_H
