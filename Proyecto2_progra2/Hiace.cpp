#include "Hiace.h"



Hiace::Hiace(const string& placa) : Bus(placa, 12) {}


string Hiace::toString() const {
    return "Hiace" + Bus::toString(); // O this->toString() dependiendo de la implementación.
}