#ifndef INSTRUMENTS_TO_STRINGINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_TO_STRINGINSTRUMENTS_STRINGEDINSTRUMENT_H

#include <string>
#include "instrument.h"

class stringedInstrument : public Instrument {
public:
    virtual std::string sound() = 0;

    void play();

protected:
    int _numberOfStrings;


};

#endif
