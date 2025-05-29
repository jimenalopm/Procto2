#ifndef H1_H
#define H1_H

#include "Bus.h"

class H1 : public Bus {
public:
   Hl(const string& placa);
    string getTipo() const override;  // 
    bool agregarPasajero(int cantidad);
    string toString() override;
};

#endif