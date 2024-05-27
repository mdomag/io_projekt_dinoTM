#include "Bot.h"
#include <ctime>
#include <cstdlib>

int Bot::randomizeAttacker() {
    srand(time(0));
    return rand() % size;
}

int Bot::randomizeVictim() {
    srand(time(0));
    return rand() % size;
}

