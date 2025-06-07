#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include "Bus.h"  //

#pragma once
template <typename T>
class Vector
{
private:
    T* elementos;
    int tamanno;
    int capacidad;

void redimensionar(int nuevaCapacidad);

public:
   Vector();
    Vector(int capacidadInicial);
    Vector(const Vector& otro);
    ~Vector();

    void agregar(T dato);
    void insertar(int posicion, T dato);
    void eliminar(int posicion);
    T obtener(int posicion);

    int getTamanno() ;
    int getCapacidad() ;
    bool estaVacio() ;
    void vaciar();
    void mostrarTodos();

    //  Nuevos operadores
    T operator[](int index) const;
    T& operator[](int index);
};

#endif