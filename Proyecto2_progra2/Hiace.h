#ifndef HIACE_H
#define HIACE_H

#include "Bus.h"

class Hiace : public Bus {
public:
    Hiace(const string& placa);
    string toString() const override;
};

#endif