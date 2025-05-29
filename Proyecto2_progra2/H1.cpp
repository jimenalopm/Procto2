#include "H1.h"



H1::H1(const string& placa) : Bus(placa, 6) {}

string H1::getTipo() const { 
    return "H1"; 
}

bool H1::agregarPasajero(int cantidad) {
    if (cantidad <= 0 || pasajerosActuales + cantidad > capacidadMaxima) {
        return false; // Si la cantidad es <= 0 o supera la capacidad máxima, no se agrega.
    }
    pasajerosActuales += cantidad;
    return true;
}

string H1::toString() {
    return Bus::toString(); // O this->toString() dependiendo de la implementación.
}