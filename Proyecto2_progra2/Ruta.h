#ifndef RUTA_H
#define RUTA_H
#include "Bus.h"
#include "Vector.h"
#include "Itransport.h"
#include <string>
#include<iostream>


class Ruta :public Itransport
{

private:
string nombreRuta;
Vector<Bus*> buses;
Vector<string> destinos;

public:
    Ruta();
    Ruta(const string& nombreRuta);
    ~Ruta();

     //
     Vector<Bus*> getBuses();
     void setBuses(const Vector<Bus*>buses);
     Vector<string> getDestinos() const;


    string getNombreRuta() const;


    /*int getTotalCapacidad() const; 
    int getTotalPasajeros() const;
    int CapacidadDisponible() const;*/

    //metodos
    /*void asignarBus(Bus* bus);
    bool reservaEspacio(int cantidadPasajeros, string& placaBusAsignado);*/
    string toString() override;
    void cargarDestinos();


    
};

#endif