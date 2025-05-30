#include "Ticket.h"



int Ticket::contadorTickets = 0;

Ticket::Ticket(const string& cedula, const string& ruta, const string& placaBus, int cantidadPasajeros)
    : cedulaPasajero(cedula), ruta(ruta), placaBus(placaBus), cantidadPasajeros(cantidadPasajeros) {
    numeroTicket = ++contadorTickets;
}

int Ticket::getNumeroTicket() const { return numeroTicket; }

string Ticket::getCedulaPasajero() const { return cedulaPasajero; }

string Ticket::getRuta() const { return ruta; }

string Ticket::getPlacaBus() const { return placaBus; }

int Ticket::getCantidadPasajeros() const { return cantidadPasajeros; }

string Ticket::toString() const {
    return "Ticket #" + to_string(numeroTicket) + 
           ", Cédula: " + cedulaPasajero +
           ", Ruta: " + ruta + 
           ", Bus: " + placaBus +
           ", Pasajeros: " + to_string(cantidadPasajeros);
}

void Ticket::mostrarInfo() const {
    cout << toString() << endl;
}