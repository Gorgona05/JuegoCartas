#include "Jugador.h"

Jugador::Jugador()
{
}

Jugador::Jugador(string a)
{
	nickname = a;
}

Jugador::~Jugador()
{
}

string Jugador::toString()
{
	stringstream s;
	s << "Nickname:  " << nickname << endl;

	return s.str();
}
