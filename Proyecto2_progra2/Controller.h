#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Interface.h"
#include "Bus.h"
#include "Minibus.h"
#include "Reserva.h"
#include "Ticket.h"
#pragma once

class Controller
{
private:
Vector<Bus> b; //Vector de buses
Vector<Ruta> r; //Vector de buses
Vector<string> t; //Vector de tickets


public:
    Controller();
    ~Controller();

//MENUS
void menuPrincipal();
void menuConfiguracion();
void menureportes();

//metodo para mostrar la disponibbilidad de pasajeros por ruta
void mostrarDisponibilidadViajeporRuta();


};

#endif