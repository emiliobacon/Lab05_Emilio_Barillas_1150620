#pragma once
#include "Carta.h"

using namespace System;

ref class ListaBaraja
{
public:
	Carta^ Cabeza; 
	Carta^ Cola; 

	void InsertarNuevo(int valor, String^ color);
	void InsertarNodo(Carta^ nodo);
	void InsertarNuevo(int valor, String^ color, int index);
	int Buscar(int valor, String^ color);
	int Buscar(int valor);
	bool Eliminar(int valor, String^ color);
	String^ Recorrer();
	Carta^ Eliminar2(int valor);
	
	bool ListaVacia();

};

