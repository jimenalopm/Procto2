#include "Bus.h"



Bus::Bus(const string& placa, int capacidadMaxima) 
    : placa(placa), capacidadMaxima(capacidadMaxima), pasajerosActuales(0) {}

string Bus::getPlaca() const { return placa; }
int Bus::getCapacidadMaxima() const { return capacidadMaxima; }
int Bus::getPasajerosActuales() const { return pasajerosActuales; }
int Bus::getCapacidadDisponible() const { 
    return capacidadMaxima - pasajerosActuales; 
}

bool Bus::agregarPasajeros(int cantidad) {
    if (pasajerosActuales + cantidad <= capacidadMaxima) {
        pasajerosActuales += cantidad;
        return true;
    }
    return false;
}

string Bus::toString() const {
    return "Bus Placa: " + placa + 
           ", Capacidad: " + std::to_string(capacidadMaxima) +
           ", Pasajeros: " + std::to_string(pasajerosActuales);
}

void Bus::mostrarInfo() const {
    cout << toString() << endl;
}

