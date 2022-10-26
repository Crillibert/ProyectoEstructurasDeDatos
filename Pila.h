#pragma once
#include "nodo.h"
ref class Pila
{
	//ya funciona
	nodo^ Cabeza;
	public:
		void Insertar(String^ valor);
		String^ Quitar();
		bool PilaVacia();
		void Limpiar();
		int Dimension();
		String^ Cima();
};

