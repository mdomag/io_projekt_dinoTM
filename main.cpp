#include <iostream>
#include "Bot.h"
#include "Postac.h"

int main(){
    std::cout << "jajco\n\n";
    Bot* bot = new Bot();
    Postac* postac = new Postac();
    postac->nazwa = "jajko";
    postac->wyswietlSzczegoly();
    return 0;
}