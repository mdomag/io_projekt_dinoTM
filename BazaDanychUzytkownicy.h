#if !defined(_BAZADANYCHUZYTKOWNICY_H)
#define _BAZADANYCHUZYTKOWNICY_H

#include "LogowanieMenu.h"
#include "Uzytkownik.h"
#include <vector>

class BazaDanychUzytkownicy : public LogowanieMenu {
public:
	std::vector<Uzytkownik> uzytkownicy;
	void sprawdzCzyUzytkownikIstnieje();
	void zaloguj();
	void dodajUzytkownika();
	void zarejestruj();
};

#endif  //_BAZADANYCHUZYTKOWNICY_H
