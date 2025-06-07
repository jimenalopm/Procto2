#include "Ticket.h"



#include <iostream>
#include <string>

Ticket::Ticket(Viaje* viaje, Bus* bus, string pasajero, string cedula, int asiento)
    : Reserva(viaje, bus, pasajero, cedula, asiento) {
      

    
}


string Ticket::obtenerInfo() {
    return Reserva::obtenerInfo() + "\n" +
           "Pasajero: " + pasajero + "\n" +
           "Asiento: " + to_string(asiento) + "\n"+
              "Código: " + generarCodigo() + "\n" ;
            
}
void Ticket::cargarTicket() {
    t.agregar(new string("Tiquete: " + obtenerInfo()));
}