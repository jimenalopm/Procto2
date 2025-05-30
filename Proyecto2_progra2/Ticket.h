#include "Itransport.h"

class Ticket:public Itransport
  {
    private: 
    static int contadorTickets;
    int numeroTicket; 
    string cedulaPasajero;
    string ruta;
    string placaBus;
    int cantidadPasajeros;
    public:
     Ticket(const string& cedula, const string& ruta, const string& placaBus, int cantidadPasajeros);
    
    // Getters
    int getNumeroTicket() const;
    string getCedulaPasajero() const;
    string getRuta() const;
    string getPlacaBus() const;
    int getCantidadPasajeros() const;
    
    string toString() const override;
    void mostrarInfo() const;
};