cmake_minimum_required(VERSION 3.13)
project(Instruments_to_Stringinstruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments_to_Stringinstruments main.cpp instrument.cpp instrument.h stringedInstrument.cpp stringedInstrument.h electricGuitar.cpp electricGuitar.h bassGuitar.cpp bassGuitar.h violin.cpp violin.h)