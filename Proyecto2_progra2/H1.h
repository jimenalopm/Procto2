#ifndef H1_H
#define H1_H

#include "Bus.h"

class H1 : public Bus {
public:
    H1(const string& placa);
    string getTipo() const override;
    string toString() override;

};

#endif