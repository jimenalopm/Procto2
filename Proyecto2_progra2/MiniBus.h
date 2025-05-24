#ifndef BUSETA_H
#define BUSETA_H

#include "Bus.h"

class Minibus : public Bus {
public:
    Minibus(const string& placa);
    string getTipo() const override;
};

#endif