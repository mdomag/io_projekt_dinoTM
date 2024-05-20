#if !defined(_SKLEP_H)
#define _SKLEP_H

#include "SklepMenu.h"

class Sklep : public SklepMenu {
public:
	void kupPostac();
	void wprowadzKodPostaci(string kod);
	void zaktualizujAsortyment();
private:
	vector<Postac> postacieDoZakupu;
};

#endif  //_SKLEP_H
