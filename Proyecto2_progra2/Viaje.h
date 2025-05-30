#include <iostream>
#include "Itransport.h"
#include "Ruta.h"



// 
class Viaje:public Itransport,public Ruta{
    public:
    Viaje();
    ~Viaje();
    void AgregarViaje();
};