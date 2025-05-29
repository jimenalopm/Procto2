#include "Bus.h"

Bus::Bus() : placa(""), capacidadMaxima(0), pasajerosActuales(0) {} 


Bus::Bus(const string& placa, int capacidad) 
    : placa(placa), capacidadMaxima(capacidad), pasajerosActuales(0) {}

string Bus::getPlaca() const { return placa; }
int Bus::getCapacidadMaxima() const { return capacidadMaxima; }
int Bus::getPasajerosActuales() const { return pasajerosActuales; }
int Bus::getCapacidadDisponible() const { 
    return (capacidadMaxima * 0.8) - pasajerosActuales;    // 80% of capacity
}

bool Bus::agregarPasajeros(int cantidad) {
    if (pasajerosActuales + cantidad <= capacidadMaxima * 0.8) {
        pasajerosActuales += cantidad;
        return true;
    }
    return false;
}

string Bus::toString() {
    return "Placa: " + placa + ", Tipo: " + getTipo() + 
           ", Capacidad: " + to_string(capacidadMaxima) + 
           ", Ocupación: " + to_string(pasajerosActuales) + 
           "/" + to_string(static_cast<int>(capacidadMaxima * 0.8));
}