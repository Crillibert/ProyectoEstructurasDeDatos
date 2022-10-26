#include "Pila.h"
#include "nodo.h"
//acciones basicas de una pila 
void Pila::Insertar(String^ valor)
{
	nodo^ Nuevo = gcnew nodo();
	Nuevo->Valor = valor;
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
}

String^ Pila::Quitar()
{
	String^ error = "---";
	if (Cabeza == nullptr)
	{
		return error;
	}
	String^ Retorno = Cabeza->Valor;
	nodo^ Top = Cabeza;
	Cabeza = Cabeza->Siguiente;
	delete(Top);
	return Retorno;
}

bool Pila::PilaVacia()
{
	if (Cabeza == nullptr)
		return true;
	else
		return false;
}

void Pila::Limpiar()
{
	while (!PilaVacia())
	{
		Quitar();
	}
}

int Pila::Dimension()
{
	int Cantidad = 0;
	for (nodo^ i = Cabeza; i != nullptr; i = i->Siguiente)
	{
		Cantidad++;
	}
	return Cantidad; 
}

String^ Pila::Cima()
{
	if (Dimension() == 0)
		return "Error";
	return Cabeza->Valor;
}