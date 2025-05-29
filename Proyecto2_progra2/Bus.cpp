#include "Bus.h"


double Bus::porcentajeAforo = 0.8; // 80% por defecto


Bus::Bus() : placa(""), capacidadMaxima(0), pasajerosActuales(0) {} 


Bus::Bus(const string& placa, int capacidad) 
    : placa(placa), capacidadMaxima(capacidad), pasajerosActuales(0) {}

string Bus::getPlaca() const { return placa; }

int Bus::getCapacidadMaxima() const { return capacidadMaxima; }

int Bus::getPasajerosActuales() const { return pasajerosActuales; }

int Bus::getCapacidadDisponible() const { 
    return (capacidadMaxima * 0.8) - pasajerosActuales;    // 80% of capacity
}

double Bus::getPorcentajeAforo() {
    return porcentajeAforo;
}

void Bus::setPorcentajeAforo(double porcentaje) {
    if (porcentaje <= 0 || porcentaje > 1.0) {
        throw std::invalid_argument("Porcentaje de aforo debe estar entre 0 y 1");
    }
    porcentajeAforo = porcentaje;
}


string Bus::toString() {
    return "Placa: " + placa + ", Tipo: " + getTipo() + 
           ", Capacidad: " + to_string(capacidadMaxima) + 
           ", Ocupación: " + to_string(pasajerosActuales) + 
           "/" + to_string(static_cast<int>(capacidadMaxima * 0.8));
}