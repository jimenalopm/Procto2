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
Vector<Bus*> Ruta::getBuses() {
    return buses;
}
void Ruta::setBuses(const Vector<Bus*> buses) {
    this->buses = buses;
}
Vector<Ruta*> Ruta::getDestinos() {
    return destinos;
}
void Ruta::setDestinos( Vector<Ruta*> destinos) {
    this->destinos = destinos;
}
string Ruta::getNombreRuta() const {
    return nombreRuta;
}

string Ruta::toString() {
    return "Ruta: " + nombreRuta + ", Destinos: " + std::to_string(destinos.getTamanno());
}
void Ruta::cargarDestinos(){
    Ruta* r1 = new Ruta("Volcán Arenal, San Carlos");
    Ruta* r2 = new Ruta("Río Celeste, San Carlos");
    Ruta* r3 = new Ruta("Tamarindo, Guanacaste");
    Ruta* r4 = new Ruta("Puerto Viejo, Limón");
    Ruta* r5 = new Ruta("Cóbano, Puntarenas");
    Ruta* r6 = new Ruta("Volcán Irazú, Cartago");
    destinos.agregar(&r1);
    destinos.agregar(&r2);
    destinos.agregar(&r3);
    destinos.agregar(&r4);
    destinos.agregar(&r5);
    destinos.agregar(&r6);
}


