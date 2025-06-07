#include "Controller.h"

Controller::Controller()
{
this->b = Vector<Bus>(); 
this->r = Vector<Ruta>(); 
this->t = Vector<string>(); 
}

Controller::~Controller()
{

}

 void Controller::menuPrincipal(){
	int op;
	do {
 
		op = Interface::menuPrincipal();
		switch (op) {
		case 1: { menuConfiguracion(); }break;
		case 2: { ; }break;
		case 3: { menureportes(); }break;
		case 4: {
			system("cls");
			cout << "Saliendo del programa...\n";
			system("pause");
		}
			  break;
		}
	} while (op!=4);
}

void Controller::menuConfiguracion()
{	int op;
	do {
 
		op = Interface::menuconfiguracion();
		switch (op) {
		case 1: {b.mostrarTodos() ; }break;
		case 2: {cout<<"La capacidad maxima para cada uno de los vehiculos es del 80% "<<endl; ; }break;
		case 3: {r.mostrarTodos() ; }break;
		case 4: {
			system("cls");
			cout << "Saliendo del programa...\n";
			system("pause");
		}
			  break;
		}
	} while (op!=4);

}

void Controller::menureportes()
{
	int op;
	do {

		op = Interface::menuReportes();
		switch (op) {
		case 1: { t.mostrarTodos(); }break;
		case 2: { mostrarDisponibilidadViajeporRuta(); }break;
		case 3: {
			system("cls");
			cout << "Saliendo del programa...\n";
			system("pause");
		}
			  break;
		}
	} while (op!=3);
}
//prueba de metodo para mostrar la disponibilidad de rutas
void Controller::mostrarDisponibilidadViajeporRuta()
{
//sin implementar 	
}




