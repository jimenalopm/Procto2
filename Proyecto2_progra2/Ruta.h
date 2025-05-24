#ifndef RUTA_H
#define RUTA_H
#include "Bus.h"
#pragma once

class Ruta :public Bus 
{
public:
    Ruta(const string& nombreRuta);
    ~Ruta();
    void agregarBus();
    string getNombreRuta() const;
    string toString() override;


private:
string nombreRuta;
    
};

#endif