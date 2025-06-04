#include <iostream>
#include "Viaje.h"
#include "Bus.h"
#include "Vector.h"


class Reserva:public Viaje{
    public:
    Reserva();
    ~Reserva();
    void Reservar(int cantidadPasajeros, string& placaBusAsignado);
    private:
    Vector<Bus*> buses;
    Ruta* viaje;
    Vector<string> destinos;
};