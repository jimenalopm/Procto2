#ifndef BUS_H
#define BUS_H
#include "Itransport.h"

#include <string>

class Bus : public Itransport {

protected:
    string placa;
    int capacidadMaxima;
    int pasajerosActuales;
    static double porcentajeAforo;

public:
    Bus();
    Bus(const string& placa, int capacidad);
    virtual ~Bus() {}

    string getPlaca() const;
    int getCapacidadMaxima() const;
    int getPasajerosActuales() const;
    int getCapacidadDisponible() const;
    
    virtual bool agregarPasajero(int cantidad) = 0; //Pure virtual function
    string toString() override;

static double getPorcentajeAforo();
static void setPorcentajeAforo(double porcentaje);

}; 

#endif