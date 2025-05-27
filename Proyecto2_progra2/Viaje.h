#include <iostream>
#include "Itransport.h"
#include "Ruta.h"
class Viaje:public Itransport,Ruta{
    public:
    Viaje();
    ~Viaje();
    void AgregarViaje();
}