#include "Hiace.h"



Hiace::Hiace(const string& placa) : Bus(placa, 12) {}

string Hiace::getTipo() const { return "Hiace"; }

bool Hiace::agregarPasajero(int cantidad) {
    if (cantidad <= 0 || pasajerosActuales + cantidad > capacidadMaxima) {
        return false; // Si la cantidad es <= 0 o supera la capacidad máxima, no se agrega.
    }
    pasajerosActuales += cantidad;
    return true;
}

string H1::toString() {
    return Bus::toString(); // O this->toString() dependiendo de la implementación.
}