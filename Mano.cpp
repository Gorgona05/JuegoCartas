#include "Mano.h"

Mano::Mano()
{
}

Mano::Mano(int a, int b)
{
	valor = a;
	palo = b;
}

Mano::~Mano()
{
}

string Mano::toString()
{
	stringstream s;
	s << "valor" << valor << endl;
	s << "palo" << palo << endl;
	return s.str();
}
