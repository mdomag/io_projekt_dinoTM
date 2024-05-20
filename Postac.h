#if !defined(_POSTAC_H)
#define _POSTAC_H


class Postac {
public:
	string wyswietlSzczegoly();
private:
	string nazwa;
	int hp;
	string opis;
	int cena;
	int dmg;
	vector<string> kody;
	int poziom;
};

#endif  //_POSTAC_H
