#include "Vector.h"
#include "Bus.h"
#include "Ruta.h"
#include "Ticket.h"


template<typename T>
void Vector<T>::redimensionar(int nuevaCapacidad) {
    T* nuevoArreglo = new T[nuevaCapacidad];
    int elementosACopiar = (nuevaCapacidad < tamanno) ? nuevaCapacidad : tamanno;

    for (int i = 0; i < elementosACopiar; i++) {
        nuevoArreglo[i] = elementos[i];
    }

    delete[] elementos;
    elementos = nuevoArreglo;
    capacidad = nuevaCapacidad;

    if (tamanno > capacidad) {
        tamanno = capacidad;
    }
}

template<typename T>
Vector<T>::Vector() : elementos(nullptr), tamanno(0), capacidad(0) {}

template<typename T>
Vector<T>::Vector(int capacidadInicial) : elementos(new T[capacidadInicial]), tamanno(0), capacidad(capacidadInicial) {}

template<typename T>
Vector<T>::Vector(const Vector& otro) : elementos(new T[otro.capacidad]), tamanno(otro.tamanno), capacidad(otro.capacidad) {
    for (int i = 0; i < tamanno; i++) {
        elementos[i] = otro.elementos[i];
    }
}

template<typename T>
Vector<T>::~Vector() {
    delete[] elementos;
}

template<typename T>
void Vector<T>::agregar(T dato) {
    if (tamanno >= capacidad) {
        int nuevaCapacidad = (capacidad == 0) ? 1 : capacidad * 2;
        redimensionar(nuevaCapacidad);
    }
    elementos[tamanno++] = dato;
}

template<typename T>
void Vector<T>::insertar(int posicion, T dato) {
    if (posicion > tamanno) {
        throw out_of_range("Posicion fuera de rango");
    }

    if (tamanno >= capacidad) {
        int nuevaCapacidad = (capacidad == 0) ? 1 : capacidad * 2;
        redimensionar(nuevaCapacidad);
    }

    for (int i = tamanno; i > posicion; i--) {
        elementos[i] = elementos[i - 1];
    }

    elementos[posicion] = dato;
    tamanno++;
}

template<typename T>
void Vector<T>::eliminar(int posicion) {
    if (posicion >= tamanno) {
        throw out_of_range("Posicion fuera de rango");
    }

    for (int i = posicion; i < tamanno - 1; i++) {
        elementos[i] = elementos[i + 1];
    }

    tamanno--;
}

template<typename T>
T Vector<T>::obtener(int posicion)  {
    if (posicion >= tamanno) {
        throw out_of_range("Posicion fuera de rango");
    }
    return elementos[posicion];
}

template<typename T>
int Vector<T>::getTamanno()  {
    return tamanno;
}

template<typename T>
int Vector<T>::getCapacidad()  {
    return capacidad;
}

template<typename T>
bool Vector<T>::estaVacio()  {
    return tamanno == 0;
}

template<typename T>
void Vector<T>::vaciar() {
    tamanno = 0;
}

template<typename T>
void Vector<T>::mostrarTodos() {
    :cout << "=== Lista de Registros (Total: " << tamanno << ") ===" << endl;
    if (tamanno == 0) {
        cout << "No hay valores registrados." << endl;
    } else {
        for (int i = 0; i < tamanno; i++) {
            elementos[i]->mostrarInfo();  // <- asume que T es puntero a objeto con mostrarInfo()
        }
    }
    cout << "===================================" << endl;
}

//  Operadores [] para acceso estilo arreglo
template<typename T>
T Vector<T>::operator[](int index) const {
    if (index < 0 || index >= tamanno) {
        throw out_of_range("Indice fuera de rango");
    }
    return elementos[index];
}

template<typename T>
T& Vector<T>::operator[](int index) {
    if (index < 0 || index >= tamanno) {
        throw out_of_range("Indice fuera de rango");
    }
    return elementos[index];
}

// 
template class Vector<Bus*>;
template class Vector<Ruta*>;
template class Vector<Ticket*>;
template class Vector<string*>;
