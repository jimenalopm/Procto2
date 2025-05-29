#include "Coaster.h"



Coaster::Coaster(const string& placa) : Bus(placa, 27) {}

string Coaster::getTipo() const { return "Coaster"; }


bool Coaster::agregarPasajero(int cantidad){
     if (cantidad <= 0 || pasajerosActuales + cantidad > capacidadMaxima * porcentajeAforo) {
        return false;   // si la cantidad es <= a 0 y es >80 no se agrega bus 
    }
    pasajerosActuales += cantidad;
    return true;
}

