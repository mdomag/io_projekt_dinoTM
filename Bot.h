#if !defined(_BOT_H)
#define _BOT_H

#include "Druzyna.h"

class Bot {
public:
	Druzyna losujDruzyne();
private:
	string nazwa;
	Druzyna druzyna;
};

#endif  //_BOT_H
