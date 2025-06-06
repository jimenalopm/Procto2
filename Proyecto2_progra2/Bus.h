#ifndef BUS_H
#define BUS_H
#include "Itransport.h"
#include<fstream>
#include <string>

class Bus : public Itransport {

protected:
    string placa;
    int capacidadMaxima;
    int pasajerosActuales;
    

public:
    Bus(const string& placa, int capacidad);
    
    // Getters
    string getPlaca() const;
    int getCapacidadMaxima() const;
    int getPasajerosActuales() const;
    int getCapacidadDisponible() const;
    
    // Métodos
    bool agregarPasajeros(int cantidad);
    string toString()  override;
     virtual string getTipo() const = 0;
    
    // Método para mostrar información (usado en Vector::mostrarTodos)
    void mostrarInfo() ;


}; 

#endif