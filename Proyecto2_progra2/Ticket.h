
#include "Reserva.h"

class Ticket:public Reserva
  {
    
    public:
     Ticket(Viaje* viaje, Bus* bus, string pasajero, string cedula, int asiento);

     
      string obtenerInfo() override;
      void cargarTicket();
      protected:
      Vector<string> t;    // Getters
    /*int getNumeroTicket() const;
    string getCedulaPasajero() const;
    string getRuta() const;
    string getPlacaBus() const;
    int getCantidadPasajeros() const;*/
    
    
};