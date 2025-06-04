#include "Reserva.h"


Reserva::Reserva(Viaje* viaje, Bus* bus, string pasajero, string cedula, int asiento) 
    : viaje(viaje), bus(bus), pasajero(pasajero), cedula(cedula), asiento(asiento) {
    codigo = generarCodigo();
    

}
Reserva::~Reserva(){

}
string Reserva::generarCodigo() {
    // Genera un código único para la reserva
    return "TICKETE" + to_string(rand() % 10000); // Ejemplo simple, puedes mejorarlo
}
string Reserva::obtenerInfo() {
    return "Reserva: " + codigo + "\n" +
           "Pasajero: " + pasajero + "\n" +
           "Cedula: " + cedula + "\n" +
           "Asiento: " + to_string(asiento) + "\n" +
           "Viaje: " + viaje->toString() + "\n" +
           "Bus: " + bus->toString();
}