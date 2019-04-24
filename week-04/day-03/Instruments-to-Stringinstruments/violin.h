#ifndef INSTRUMENTS_TO_STRINGINSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_TO_STRINGINSTRUMENTS_VIOLIN_H


#include "stringedInstrument.h"

class Violin: public stringedInstrument {
public:
    Violin();

    Violin(int numberOfStrings);

    std::string sound();
};

#endif
