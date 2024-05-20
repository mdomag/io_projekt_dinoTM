#if !defined(_SKLEP_H)
#define _SKLEP_H

#include "SklepMenu.h"
#include "Postac.h"

#include <vector>
#include <string>
class Sklep : public SklepMenu {
public:
	void kupPostac();
	void wprowadzKodPostaci(std::string kod);
	void zaktualizujAsortyment();
private:
	std::vector<Postac> postacieDoZakupu;
};

#endif  //_SKLEP_H
