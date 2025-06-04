#include <iostream>
#include "Itransport.h"
#include "Ruta.h"
#include "Vector.h"



// 
class Viaje:public Itransport{
    public:
    Viaje(Ruta* ruta, string& fecha, string& horaDeSalida)
        : rutaAsignada(ruta), fecha(fecha), horaDeSalida(horaDeSalida) {};
    Viaje();
    ~Viaje();
    bool eliminarBus(const string& placaBus);
    void asignarBus(Bus* bus);
    //setters y getters
    Ruta* getRutaAsignada();
    Vector<Bus*>& getBusesAsignados();
    string getFecha();
    string getHoraDeSalida();

    //Metodo de la interfaz
    string toString() override;

    private:
    Ruta* rutaAsignada;
    Vector<Bus*> busesAsignados;
    string fecha;
    string horaDeSalida;
};