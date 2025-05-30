#include "MiniBus.h"



Minibus::Minibus(const string& placa) : Bus(placa, 40) {}


string Minibus::toString() const {
    return "MiniBus" + Bus::toString();
}