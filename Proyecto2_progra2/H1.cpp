#include "H1.h"



H1::H1(const string& placa) : Bus(placa, 6) {}

string H1::getTipo() const { return "H1"; }