#ifndef FLOTABUSES_H
#define FLOTABUSES_H
#include "Vector.h"
#include "Bus.h"
#include "Ticket.h"
#include <string> 
#pragma once

class FlotaBuses
{
public:
    FlotaBuses();
    ~FlotaBuses();

    void cargarDatoiniciales();
    void agregarTicket(Ticket* t){
        tickets.agregar(&t);
    };
   void generarReporteTickets(){
        cout<<"Reporte de Tickets Generados: "<<endl;
        for(int i=0; i<tickets.getTamanno(); i++){
            tickets.obtener(i)->toString();
        }
    }
    
private:
    Vector<Bus> buses;
    Vector<Ticket*> tickets;
};

#endif