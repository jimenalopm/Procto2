#include "Coaster.h"



Coaster::Coaster(const string& placa, int capacidadMaxima) : Bus(placa, 27) {}

string Coaster::toString() {
    return "Coaster" + Bus::toString(); // O this->toString() dependiendo de la implementación.
}