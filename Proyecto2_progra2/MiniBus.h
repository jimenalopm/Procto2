#ifndef MINIBUS_H
#define MINIBUS_H

#include "Bus.h"
#include <string>

class Minibus : public Bus {
public:
    Minibus(const string& placa, int capacidadMaxima);
     string toString() override;
    string getTipo() const  override { return "Minibus"; }
};

#endif // MINIBUS_H