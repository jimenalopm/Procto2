#ifndef H1_H
#define H1_H

#include "Bus.h"

class H1 : public Bus {
public:
   H1(const string& placa, int capacidadMaxima);
    string toString() override;
     string getTipo() const override { return "H1"; }
};

#endif