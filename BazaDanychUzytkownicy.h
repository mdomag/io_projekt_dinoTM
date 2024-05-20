#if !defined(_BAZADANYCHUZYTKOWNICY_H)
#define _BAZADANYCHUZYTKOWNICY_H

#include "LogowanieMenu.h"

class BazaDanychUzytkownicy : public LogowanieMenu {
public:
	vector<int, string, string> uzytkownicy;
	void sprawdzCzyUzytkownikIstnieje();
	void zaloguj();
	void dodajUzytkownika();
	void zarejestruj();
};

#endif  //_BAZADANYCHUZYTKOWNICY_H
