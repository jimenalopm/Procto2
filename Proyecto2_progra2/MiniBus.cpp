#include "MiniBus.h"



Minibus::Minibus(const string& placa) : Bus(placa, 40) {}

string Minibus::getTipo() const { return "Buseta"; }

Minibus::Minibus(const string& placa) : Bus(placa, 40) {}

string Minibus::getTipo() const { return "Buseta"; }


bool Minibus::agregarPasajero(int cantidad){
     if (cantidad <= 0 || pasajerosActuales + cantidad > capacidadMaxima * porcentajeAforo) {
        return false;   // si la cantidad es <= a 0 y es >80 no se agrega bus 
    }
    pasajerosActuales += cantidad;
    return true;
}