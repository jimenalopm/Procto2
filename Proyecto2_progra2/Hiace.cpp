#include "Hiace.h"



Hiace::Hiace(const string& placa, int capacidadMaxima) : Bus(placa, 12) {}


string Hiace::toString() {
    return "Hiace" + Bus::toString(); // O this->toString() dependiendo de la implementación.
}