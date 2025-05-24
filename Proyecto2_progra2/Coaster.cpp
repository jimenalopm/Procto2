#include "Coaster.h"



Coaster::Coaster(const string& placa) : Bus(placa, 27) {}

string Coaster::getTipo() const { return "Coaster"; }