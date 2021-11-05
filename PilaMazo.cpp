#include "PilaMazo.h"

void PilaMazo::Insertar(Carta^ nodo)
{
	Carta^ Nuevo = gcnew Carta();
	Nuevo = nodo;
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
}

void PilaMazo::Limpiar()
{
	while (!PilaVacia())
	{
		Quitar();
	}
}

Carta^ PilaMazo::Quitar()
{
	if (Cabeza ==nullptr)
	{
		return nullptr;
	}
	Carta^ Retorno = gcnew Carta();
	Retorno = Cabeza;
	Carta^ Top = Cabeza; 
	Cabeza = Cabeza->Siguiente;
	delete(Top);
	return Retorno;
}



bool PilaMazo::PilaVacia()
{
	if (Cabeza == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
