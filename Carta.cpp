#include "Carta.h"

Carta::Carta()
{
	valor = 0;
	palo = 0;
}

Carta::Carta(int a, int b)
{
	valor = a;
	palo = b;
}

Carta::~Carta()
{
}

int Carta::getValor()
{
	return valor;
}

int Carta::getPalo()
{
	return palo;
}
