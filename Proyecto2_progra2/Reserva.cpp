#include "Reserva.h"


Reserva::Reserva(Viaje* viaje, Bus* bus, string pasajero, string cedula, int asiento) 
    : viaje(viaje), bus(), pasajero(pasajero), cedula(cedula), asiento(asiento) {
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




/*bool Reserva::reservaEspacio(int cantidadPasajeros, string& placaBusAsignado) {
    if (cantidadPasajeros <= 0) {
        return false;
    }

    Vector<Bus*>& buses = viaje->getBusesAsignados();
    for (int i = 0; i < buses.getTamanno(); i++) {
        Bus* bus = buses[i];
        if (bus && bus->getCapacidadDisponible() >= cantidadPasajeros) {
            bus->agregarPasajeros(cantidadPasajeros); // Actualiza la capacidad
            placaBusAsignado = bus->getPlaca();
            return true;
        }
    }
    
    return false; // No hay buses con capacidad
}*/