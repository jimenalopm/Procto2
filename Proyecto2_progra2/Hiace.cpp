#include "Hiace.h"



Hiace::Hiace(const string& placa) : Bus(placa, 12) {}

string Hiace::getTipo() const { return "Hiace"; }