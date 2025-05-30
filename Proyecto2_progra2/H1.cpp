#include "H1.h"



H1::H1(const string& placa) : Bus(placa, 6) {}


string H1::toString() const {
    return Bus::toString(); // O this->toString() dependiendo de la implementación.
}