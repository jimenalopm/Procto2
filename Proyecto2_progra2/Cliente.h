#include <iostream>
using namespace std;




class Cliente{
    protected:
    string nombreCliente;
    string idCliente;
    public:
    Cliente();
    Cliente(string nombreCliente, string idCliente);
    ~Cliente();
    void mostrarInfo();

};