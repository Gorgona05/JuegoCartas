#include "Nodo.h"

Nodo::Nodo()
{
	dato = nullptr;
	next = nullptr;
}

Nodo::Nodo(JugadorGenerico* a, Nodo* b)
{
	dato = a;
	next = b;
}

Nodo::~Nodo()
{
	delete dato;

}
