#include "Reserva.h"
#include "Cliente.h"



class Ticket:public Reserva, public Cliente{
    protected:
    string numeroDeAsiento;
    public:
    Ticket();
    Ticket(string numeroDeAsiento);  // con parametros 
    ~Ticket();
    string GenerarTicket();
};