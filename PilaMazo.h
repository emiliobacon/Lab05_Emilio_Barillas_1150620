#pragma once
#include "Carta.h"
ref class PilaMazo
{
	Carta^ Cabeza;

public: 
	void Insertar(Carta^ nodo);
	void Limpiar();
	Carta^ Quitar();
	bool PilaVacia();


	int Size();
	String^ Peek();
	String^ Recorrer();
	String^ Imprimir();
};

