#ifndef COASTER_H
#define COASTER_H

#include "Bus.h"

class Coaster : public Bus {
public:
    Coaster(const string& placa);
    string getTipo() const override;
};

#endif