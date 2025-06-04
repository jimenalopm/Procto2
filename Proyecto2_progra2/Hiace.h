#ifndef HIACE_H
#define HIACE_H

#include "Bus.h"

class Hiace : public Bus {
public:
    Hiace(const string& placa, int capacidadMaxima);
    string toString() override;
     string getTipo() const override { return "Hiace"; }
};

#endif