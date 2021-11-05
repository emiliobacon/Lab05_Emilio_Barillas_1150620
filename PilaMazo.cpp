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

int PilaMazo::Size()
{
	int Cantidad = 0;
	for (Carta^ i = Cabeza; i != nullptr; i = i->Siguiente)
	{
		Cantidad++;
	}
	return Cantidad;
}

String^ PilaMazo::Peek()
{
	if (!PilaVacia())
	{
		String^ Retorno = Cabeza->Valor + " " + Cabeza->Color;
		return Retorno;
	}
	else
	{
		return nullptr;
	}
}

String^ PilaMazo::Recorrer()
{
	Carta^ Recorrer = gcnew Carta();
	String^ Datos;
	Recorrer = Cabeza;
	while (Recorrer != nullptr)
	{
		Datos += Recorrer->Valor + "-" + Recorrer->Color + "\n";
		Recorrer = Recorrer->Siguiente;
	}
	return Datos;
}
