#if !defined(_WALKA_H)
#define _WALKA_H

#include "WalkaMenu.h"
#include "Bot.h"
#include "Druzyna.h"
#include "Uzytkownik.h"

class Walka : public WalkaMenu {
public:
	Bot losujPrzeciwnika();
	bool walka();
	void wykonajRuch(int postacAtakujaca, int postacAtakowana);
	bool sprawdzHP(Druzyna druzyna);
	void oglosWynikWalk();
	void przyznajNagrode();
private:
	Uzytkownik* uzytkownik;
	Bot* przeciwnik;
	bool wynikWalki;
};

#endif  //_WALKA_H
