#include "Interface.h"

int Interface::menuPrincipal()
{       
system("cls");
        int op;
        cout << "======================================================" << endl;
        cout << "|                BIENVENIDO AL MENU                  |" << endl;
        cout << "|Ingresa tu opcion:                                  |" << endl;
        cout << "======================================================" << endl;
        cout << "| 1.Configuracion de la flota de transporte          |" << endl;
        cout << "| 2.Reserva de tiquetes                              |" << endl;
        cout << "| 3.Reportes                                         |" << endl;
        cout << "| 4.Salir                                            |" << endl;
        cout << "======================================================" << endl;
        cout << " Ingrese una opcion (1-4): ";
        cin>>op; 
    return op;
}

int Interface::menuconfiguracion()
{
system("cls");
        int op;
        cout << "======================================================" << endl;
        cout << "|                MENU CONFIGURACION                  |" << endl;
        cout << "|Ingresa tu opcion:                                  |" << endl;
        cout << "======================================================" << endl;
        cout << "| 1.Tipos de buses                                   |" << endl;
        cout << "| 2.Resticciones sanitarias                          |" << endl;
        cout << "| 3.Rutas de viaje                                   |" << endl;
        cout << "| 4.Regresar                                         |" << endl;
        cout << "======================================================" << endl;
        cout << " Ingrese una opcion (1-4): ";
        cin>>op; 
    return op;

}

int Interface::menuReportes()
{
  system("cls");
        int op;
        cout << "======================================================" << endl;
        cout << "|                MENU REPORTES                       |" << endl;
        cout << "|Ingresa tu opcion:                                  |" << endl;
        cout << "======================================================" << endl;
        cout << "| 1.Mostrar todos los tiquetes emitidos              |" << endl;
        cout << "| 2.Mostrar la disponibilidad de pasajeros por ruta  |" << endl;
        cout << "| 3.Regresar                                         |" << endl;
        cout << "======================================================" << endl;
        cout << " Ingrese una opcion (1-3): ";
        cin>>op; 
    return op;
}
