#inlcude "Reserva.h"
#include "Cliente.h"
class Ticket:public Reserva,Cliente{
    protected:
    string numeroDeAsiento;
    public:
    Ticket();
    Ticket(string numeroDeAsiento);
    ~Ticket();
    string GenerarTicket();
}