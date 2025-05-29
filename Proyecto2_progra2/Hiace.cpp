#include "Hiace.h"



Hiace::Hiace(const string& placa) : Bus(placa, 12) {}

string Hiace::getTipo() const { return "Hiace"; }


bool Hiace::agregarPasajero(int cantidad){
     if (cantidad <= 0 || pasajerosActuales + cantidad > capacidadMaxima * porcentajeAforo) {
        return false;   // si la cantidad es <= a 0 y es >80 no se agrega bus 
    }
    pasajerosActuales += cantidad;
    return true;
}