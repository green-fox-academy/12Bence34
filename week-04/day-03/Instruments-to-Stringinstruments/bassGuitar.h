#ifndef INSTRUMENTS_TO_STRINGINSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_TO_STRINGINSTRUMENTS_BASSGUITAR_H

#include "stringedInstrument.h"

class BassGuitar: public stringedInstrument {
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    std::string sound();
};



#endif
