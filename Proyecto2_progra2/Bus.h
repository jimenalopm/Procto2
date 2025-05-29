#ifndef BUS_H
#define BUS_H
#include "Itransport.h"

#include <string>

class Bus : public Itransport {

protected:
    string placa;
    int capacidadMaxima;
    int pasajerosActuales;


public:
    Bus();
    Bus(const string& placa, int capacidad);
    virtual ~Bus() {}

    string getPlaca() const;
    int getCapacidadMaxima() const;
    int getPasajerosActuales() const;
    int getCapacidadDisponible() const;

    bool agregarPasajeros(int cantidad); //Pure virtual function
    virtual string getTipo() const = 0;  // Pure virtual function
    string toString() override;
};

#endif