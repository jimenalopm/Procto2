#include "FlotaBuses.h"
#include "MiniBus.h"
#include "Coaster.h"
#include "Hiace.h"
#include "H1.h"
#include <iostream>
#include<fstream>
FlotaBuses::FlotaBuses()
{
    //cargarBuses();
}

FlotaBuses::~FlotaBuses()
{

}
void FlotaBuses::cargarDatoiniciales(){
    // MiniBuss (40 pasajeros)
    buses.agregar(new Minibus("BUS001",40));
    buses.agregar(new Minibus("BUS002", 40));
    buses.agregar(new Minibus("BUS003", 40));

    // Coasters (27 pasajeros)
    buses.agregar(new Coaster("COA001", 27));
    buses.agregar(new Coaster("COA002", 27));

    // Hiace (12 pasajeros)
    buses.agregar(new Hiace("HIA001", 12));
    buses.agregar(new Hiace("HIA002", 12));
    buses.agregar(new Hiace("HIA003", 12));
    buses.agregar(new Hiace("HIA004", 12));

    // H1 (6 pasajeros)
    buses.agregar(new H1("HON001", 6));
    buses.agregar(new H1("HON002", 6));
}