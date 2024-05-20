#if !defined(_WALKAMENU_H)
#define _WALKAMENU_H

#include "Bot.h"

class WalkaMenu {
public:
	Bot losujPrzeciwnika();
	void wykonajRuch(int postacAtakujaca, int postacAtakowana);
};

#endif  //_WALKAMENU_H
