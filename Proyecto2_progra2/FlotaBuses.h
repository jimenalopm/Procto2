#ifndef FLOTABUSES_H
#define FLOTABUSES_H
#include "Vector.h"
#include "Bus.h"
#include <string>
#pragma once

class FlotaBuses
{
public:
    FlotaBuses();
    ~FlotaBuses();

    void cargarDatoiniciales();

    Vector<Bus> getFlota();
    void mostrarFlota();

    //gestion de buses
    void agregarBus(Bus* bus);
    Bus* buscarBus(const std::string& placa);
    void mostrarFlota();
    
private:
    Vector<Bus> buses;
    
};

#endif