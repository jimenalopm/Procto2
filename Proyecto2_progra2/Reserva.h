#include <iostream>
#include "Viaje.h"



class Reserva:public Viaje{
    public:
    Reserva();
    ~Reserva();
    void Reservar();
};