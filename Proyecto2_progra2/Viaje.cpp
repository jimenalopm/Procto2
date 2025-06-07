#include "Viaje.h"

Viaje::Viaje(Ruta* ruta, string& fecha, string& horaDeSalida)
    : rutaAsignada(ruta), fecha(fecha), horaDeSalida(horaDeSalida) {
    // Constructor implementation
}

Viaje::~Viaje(){
    for (int i = 0; i < busesAsignados.getTamanno(); i++) {
        delete busesAsignados.obtener(i);
    }
}

void Viaje::asignarBus(Bus* bus){
   busesAsignados.agregar(&bus);
}
bool Viaje::eliminarBus(const string& placaBus) {
    for (int i = 0; i < busesAsignados.getTamanno(); i++) {
        Bus* bus = busesAsignados.obtener(i);
        if (bus->getPlaca() == placaBus) {
            busesAsignados.eliminar(i);
            return true; // Bus eliminado exitosamente
        }
    }
    return false; // No se encontró el bus con la placa especificada
}
void Viaje::mostrarDisponibilidad() {
    
        cout << "Buses asignados para el viaje: " << rutaAsignada->getNombreRuta() << std::endl;
        for (int i = 0; i < busesAsignados.getTamanno(); i++) {
            Bus* bus = busesAsignados.obtener(i);
            cout << bus->toString()<< std::endl;
        }
    
}
Ruta* Viaje::getRutaAsignada() {
    return rutaAsignada;
}
Vector<Bus*>& Viaje::getBusesAsignados() {
    return busesAsignados;
}
string Viaje::getFecha() {
    return fecha;
}
string Viaje::getHoraDeSalida() {
    return horaDeSalida;
}
string Viaje::toString() {
    return "Viaje a la ruta: " + rutaAsignada->getNombreRuta() +
           ", Fecha: " + fecha +
           ", Hora de salida: " + horaDeSalida +
              ", Buses asignados: " + to_string(busesAsignados.getTamanno());

}