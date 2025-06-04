#ifndef COASTER_H
#define COASTER_H

#include "Bus.h"

class Coaster : public Bus {
public:
    Coaster(const string& placa, int capacidadMaxima);
    string toString() override;
     string getTipo() const override { return "Coaster"; }

    
}; 

#endif