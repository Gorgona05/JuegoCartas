#include "Mazo.h"

Mazo::Mazo()
{
}

Mazo::Mazo(int a, int b)
{
	
	valor = a;
	palo = b;
	}

Mazo::~Mazo()
{
}

string Mazo::toString()
{
	stringstream s;
	s << "valor" << valor << endl;
	s << "palo" << palo << endl;
	return s.str();
}
