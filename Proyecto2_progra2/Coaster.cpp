#include "Coaster.h"



Coaster::Coaster(const string& placa) : Bus(placa, 27) {}

string Coaster::toString() const {
    return "Coaster" + Bus::toString(); // O this->toString() dependiendo de la implementación.
}