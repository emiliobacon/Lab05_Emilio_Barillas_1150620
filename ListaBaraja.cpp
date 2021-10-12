#include "ListaBaraja.h"
#include "Carta.h"


void ListaBaraja::InsertarNuevo(int valor, bool color) 
{
	Carta^ Nuevo = gcnew Carta();
	Nuevo->Valor = valor;
	Nuevo->color = color;
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
};
