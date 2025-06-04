#include "Minibus.h"
#include <string>

Minibus::Minibus(const std::string& placa, int capacidadMaxima) 
    : Bus(placa, capacidadMaxima) {}  // Usa el parámetro capacidadMaxima

std::string Minibus::toString() {
    return "Minibus " + Bus::toString();  // Nombre consistente
}