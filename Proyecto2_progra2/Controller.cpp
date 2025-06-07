#include "Controller.h"

Controller::Controller()
{

}

Controller::~Controller()
{

}

 void Controller::menuPrincipal(){
	int op;
	do {
 
		op = Interface::menuPrincipal();
		switch (op) {
		case 1: { ; }break;
		case 2: { ; }break;
		case 3: { ; }break;
		case 4: {
			system("cls");
			cout << "Saliendo del programa...\n";
			system("pause");
		}
			  break;
		}
	} while (op!=4);
}   

