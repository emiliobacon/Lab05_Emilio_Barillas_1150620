#include "ListaBaraja.h"
#include "Carta.h"

void ListaBaraja::InsertarNuevo(int valor, String^ color)
{
	Carta^ Nuevo = gcnew Carta();
	Nuevo->Valor = valor;
	Nuevo->Color = color;
	Nuevo->Mostrar = 0; 
	
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
}

void ListaBaraja::InsertarNodo(Carta^ nodo)
{
	Carta^ Nuevo = gcnew Carta();
	Nuevo = nodo;
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
}

void ListaBaraja::InsertarNuevo(int valor, String^ color, int index)
{
	if (index == 0)
	{
		InsertarNuevo(valor, color);
	}
	else
	{
		Carta^ Nuevo = gcnew Carta();
		Nuevo->Valor = valor;
		Nuevo->Color = color;
		Nuevo->Mostrar = false;

		int PosicionActual = 0;
		Carta^ NodoActual = Cabeza;
		Carta^ NodoAnterior = Cabeza;

		while (PosicionActual < index)
		{
			NodoAnterior = NodoActual;
			NodoActual = NodoActual->Siguiente;
			PosicionActual++;
		}
		Nuevo->Siguiente = NodoActual;
		NodoAnterior->Siguiente = Nuevo;
	}
}

int ListaBaraja::Buscar(int valor, String^ color)
{
	int count = 0;
	for (Carta^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->Valor == valor && indice->Color == color)
		{
			return count;
		}
		count++;
	}
	return -1;
}

int ListaBaraja::Buscar(int valor)
{
	int count = 0;
	for (Carta^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->Valor == valor)
		{
			return count;
		}
		count++;
	}
	return -1;
}

bool ListaBaraja::Eliminar(int valor, String^ color)
{
	Carta^ Actual = Cabeza;
	int Indice = Buscar(valor, color);
	if (Indice == -1)
	{
		return false;
	}
	else if (Indice == 0)
	{
		Cabeza = Cabeza->Siguiente;
	}
	else
	{
		Carta^ Anterior = Cabeza;
		for (int i = 0; i < Indice; i++)
		{
			Anterior = Actual;
			Actual = Actual->Siguiente;
		}
		Anterior->Siguiente = Actual->Siguiente;
	}
	delete(Actual);
	return true;
}

String^ ListaBaraja::Recorrer()
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

Carta^ ListaBaraja::Eliminar2(int valor)
{
	Carta^ Actual = Cabeza;
	int Indice = Buscar(valor);
	if (Indice == -1)
	{
		return nullptr;
	}
	else if (Indice == 0)
	{
		Cabeza = Cabeza->Siguiente;
	}
	else
	{
		Carta^ Anterior = Cabeza;
		for (int i = 0; i < Indice; i++)
		{
			Anterior = Actual;
			Actual = Actual->Siguiente;
		}
		Anterior->Siguiente = Actual->Siguiente;
	}
	delete(Actual);
	return Actual;
}
