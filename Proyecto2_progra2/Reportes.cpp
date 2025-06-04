#include "Reportes.h"
Reportes::Reportes(){

}
Reportes::~Reportes(){

}
void Reportes::mostrarViajesDisponibles(){
   Viaje viaje;
    cout << "Mostrando viajes disponibles..." << endl;
    viaje.toString();
    // Aquí podrías agregar más lógica para mostrar los viajes disponibles
    // por ejemplo, iterar sobre un vector de viajes y mostrarlos.
}
void Reportes::mostrarTicketes(){
     FlotaBuses flota;
    flota.generarReporteTickets();
}