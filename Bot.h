#if !defined(_BOT_H)
#define _BOT_H

#include "Druzyna.h"
#include <string>

class Bot {
public:
	Druzyna losujDruzyne();
private:
	std::string nazwa;
	Druzyna druzyna;
};

#endif  //_BOT_H
