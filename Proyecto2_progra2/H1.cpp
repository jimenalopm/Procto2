#include "H1.h"



H1::H1(const string& placa) : Bus(placa, 6) {}

string H1::getTipo() const { return "H1"; }


bool H1::agregarPasajero(int cantidad){
     if (cantidad <= 0 || pasajerosActuales + cantidad > capacidadMaxima * porcentajeAforo) {
        return false;   // si la cantidad es <= a 0 y es >80 no se agrega bus 
    }
    pasajerosActuales += cantidad;
    return true;
}