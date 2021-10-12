#pragma once
#include "Carta.h"

ref class ListaBaraja
{
public:
	Carta^ Cabeza; 
	Carta^ Cola; 

	void InsertarNuevo(int valor, bool color);
};

