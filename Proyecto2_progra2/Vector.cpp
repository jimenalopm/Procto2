#include "Vector.h"
#include "Bus.h"
#include "Ruta.h"
#include "Ticket.h"

template<typename T>
void Vector<T>::redimensionar(int capacidad){
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
Vector<T>::Vector()
{
	this->elementos = nullptr;
	this->tamanno = 0;
	this->capacidad = 0;
}



template<typename T>
Vector<T>::Vector(int capacidadInicial)
{
	this->elementos = new T[capacidadInicial];
	this->tamanno = 0;
	this->capacidad = capacidadInicial;
}


template<typename T>
Vector<T>::Vector(const Vector& otro) {//recibe un vector y crea uno nuevo igual
	this->tamanno = otro.tamanno;
	this->capacidad = otro.capacidad;
	elementos = new T[capacidad];
	for (int i = 0; i < tamanno; i++) {
		elementos[i] = otro.elementos[i];
	}
}



template<typename T>
Vector<T>::~Vector()
{
	delete[] elementos;
}



template<typename T>
void Vector<T>::agregar(T * T) {
// M�todo para agregar un bus al final
	// Si no hay espacio suficiente, redimensionar
	if (tamanno >= capacidad) {
		int nuevaCapacidad = (capacidad == 0) ? 1 : capacidad * 2;
		redimensionar(nuevaCapacidad);
	}

	// 
	elementos[tamanno++] = *T;  // o elemento
}



template<typename T>
void Vector<T>::insertar(int posicion, T * dato)
{
	// Verificar que la posici�n sea v�lida
	if (posicion > tamanno) {
		throw std::out_of_range("Posici�n fuera de rango");
	}

	// Si no hay espacio suficiente, redimensionar
	if (tamanno >= capacidad) {
		int nuevaCapacidad = (capacidad == 0) ? 1 : capacidad * 2;
		redimensionar(nuevaCapacidad);
	}

	// Desplazar buses para hacer espacio
	for (int i = tamanno; i > posicion; i--) {
		elementos[i] = elementos[i - 1];
	}

	// Insertar el bus
	elementos[posicion] = *dato;
	tamanno++;
}



template<typename T>
void Vector<T>::eliminar(int posicion) {
	// Verificar que la posici�n sea v�lida
	if (posicion >= tamanno) {
		throw std::out_of_range("Posici�n fuera de rango");
	}

	// Desplazar buses para eliminar
	for (size_t i = posicion; i < tamanno - 1; i++) {
		elementos[i] = elementos[i + 1];
	}

	// Reducir el tama�o
	tamanno--;
}



template<typename T>
T Vector<T>::obtener(int posicion) {
	if (posicion >= tamanno) {
		throw std::out_of_range("Posici�n fuera de rango");
	}
	return elementos[posicion];
}



template<typename T>
int Vector<T>::getTamanno() {
	return this->tamanno;
}

template<typename T>
// M�todo para obtener la capacidad actual
int Vector<T>::getCapacidad() {
	return this->capacidad;
}


template<typename T>
// M�todo para verificar si el vector est� vac�o
bool Vector<T>::estaVacio() {
	return tamanno == 0;
}


template<typename T>
// M�todo para vaciar el vector
void Vector<T>::vaciar() {
	tamanno = 0;
}


template<typename T>
// M�todo para mostrar todos los Buses
void Vector<T>::mostrarTodos() {
	std::cout << "=== Lista de Registros (Total: " << tamanno << ") ===" << std::endl;
	if (tamanno == 0) {
		std::cout << "No hay valores registrados." << std::endl;
	}
	else {
		for (size_t i = 0; i < tamanno; i++) {
			std::cout << i + 1 << ". ";
			elementos[i].mostrarInfo();
		}
	}
	std::cout << "===================================" << std::endl;
}



//Hay que definir los template en el .cpp
template class Vector<Bus>;
template class Vector<Ruta>;
template class Vector<Ticket>;


