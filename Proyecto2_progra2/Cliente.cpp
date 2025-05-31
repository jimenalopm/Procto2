#include "Cliente.h"
Cliente::Cliente(){

}
Cliente::Cliente(string nombreCliente, string idCliente){
    this->nombreCliente = nombreCliente;
    this->idCliente = idCliente;
}
Cliente::~Cliente(){
    
}
void Cliente::mostrarInfo() {
    cout << "Nombre del Cliente: " << nombreCliente << endl;
    cout << "ID del Cliente: " << idCliente << endl;
}