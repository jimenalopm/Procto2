#include "Ruta.h"

Ruta::Ruta(){
    cargarDestinos();
}
Ruta::Ruta(const string& nombreRuta) : nombreRuta(nombreRuta) {
    cargarDestinos();
}
Ruta::~Ruta() {
    // Destructor 
}
Vector<Bus> Ruta::getBuses() {
    return buses;
}
void Ruta::setBuses(const Vector<Bus> buses) {
    this->buses = buses;
}
Vector<string> Ruta::getDestinos() const {
    return destinos;
}
string Ruta::getNombreRuta() const {
    return nombreRuta;
}
void Ruta::asignarBus(Bus* bus){
    buses.agregar(bus);
}
/*bool Ruta::reservaEspacio(int cantidadPasajeros, string& placaBusAsignado) {
    for (int i = 0; i < buses.getTamanno(); i++) {
        Bus& bus = buses.obtener(i);
        // Verificar si el bus tiene suficiente capacidad disponible
        if (bus.getCapacidadDisponible() >= cantidadPasajeros) {
            bus.agregarPasajeros(cantidadPasajeros);
            placaBusAsignado = bus.getPlaca();
            return true;
        }
    }
    return false; // No se encontró un bus con espacio suficiente
}*/
string Ruta::toString() {
    return "Ruta: " + nombreRuta + ", Destinos: " + std::to_string(destinos.getTamanno());
}
void Ruta::cargarDestinos(){
    destinos.agregar(new string("Volcán Arenal, San Carlos"));
    destinos.agregar(new string("Río Celeste, San Carlos"));
    destinos.agregar(new string("Tamarindo, Guanacaste"));
    destinos.agregar(new string("Puerto Viejo, Limón"));
    destinos.agregar(new string("Cóbano, Puntarenas"));
    destinos.agregar(new string("Volcán Irazú, Cartago"));
}


