#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include "Bus.h"  //

#pragma once
template <typename T>
class Vector
{
private:
    T** elementos;
    int tamanno;
    int capacidad;

     // metodo privado para redimensionar
    void redimensionar(int Capacidad);

public:
    Vector();

    // con capacidad inicial
    Vector(int capacidadInicial);

    //copia 
    Vector(const Vector& otro);

    //destrcutor 
    ~Vector();
    
    //Metodo para agregar  un objecto al final
    void agregar(T* dato);

    // agregar un bus en una posicion especifica 
    void insertar(int posicion, T* dato);

    void eliminar(int posicion);

    T* obtener(int posicion) ;
    int getTamanno() ;
    int getCapacidad() ;
    bool estaVacio() ;
    void vaciar() ;
    void mostrarTodos();


};

#endif