#ifndef INSTRUMENTS_TO_STRINGINSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_TO_STRINGINSTRUMENTS_ELECTRICGUITAR_H

#include "stringedInstrument.h"

class ElectricGuitar : public stringedInstrument {
public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

    std::string sound();
};

#endif
