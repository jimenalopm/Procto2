#include "Ticket.h"



#include <iostream>
#include <string>

Ticket::Ticket(Viaje* viaje, Bus* bus, string pasajero, string cedula, int asiento)
    : Reserva(viaje, bus, pasajero, cedula, asiento) {
      

    
}

void Ticket::imprimir() {
    cout << "Ticket de Viaje" << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Pasajero: " << pasajero << endl;
    cout << "Bus: "<<bus->getPlaca() << endl;
    cout <<"Ruta: "<< viaje->getRutaAsignada()->getNombreRuta() << endl;
}
string Ticket::obtenerInfo() {
    return Reserva::obtenerInfo() + "\n" +
           "Pasajero: " + pasajero + "\n" +
           "Asiento: " + to_string(asiento) + "\n";
}