#ifndef INSTRUMENTS_TO_STRINGINSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_TO_STRINGINSTRUMENTS_INSTRUMENT_H

#include <string>

class Instrument {
public:
    virtual void play() = 0;

protected:
    std::string _name;
};


#endif
