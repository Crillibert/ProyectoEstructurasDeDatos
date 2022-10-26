#pragma once
#include <iostream>
#include <string>
//usar strings en clases fue complicado pero al agregrar la siguiente linea funciono
using namespace System;
ref class nodo
{
	public:
		String^ Valor;
		nodo^ Siguiente;
};

