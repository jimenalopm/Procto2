#include <iostream>
#include "Viaje.h"
#include "Bus.h"
#include "Vector.h"


class Reserva:public Viaje{
    public:
    Reserva(Viaje* viaje, Bus* bus, string pasajero, string cedula, int asiento);
    virtual ~Reserva();
    string generarCodigo();
    virtual string obtenerInfo();
    
    //Getters
    string getCodigo() { return codigo; }
    Viaje* getViaje() { return viaje; }
    Bus* getBus() { return bus; }
    int getAsiento() { return asiento; }
    
    protected:
    string codigo;
    Viaje* viaje;
    Bus* bus;
    int asiento;
    string pasajero;
    string cedula;
};