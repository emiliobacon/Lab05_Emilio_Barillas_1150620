#pragma once
using namespace System;

ref class Carta
{
public:
	int Valor;
	String^ Color; 
	bool Mostrar;

	Carta^ Siguiente;
};

