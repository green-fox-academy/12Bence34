#include "stringedInstrument.h"
#include <iostream>

void stringedInstrument::play() {
    std::cout << _name << " , a " << _numberOfStrings << " - stringed instrument that goes " << sound() << std::endl;
}