#include "violin.h"

Violin::Violin() {
    _numberOfStrings = 4;
    _name = "Violin";
}

Violin::Violin(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
    _name = "Bass Guitar";
}

std::string Violin::sound() {
    return "Screech";
}