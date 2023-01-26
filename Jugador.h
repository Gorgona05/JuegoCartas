#pragma once
#include "JugadorGenerico.h"

class Jugador :public JugadorGenerico {


public:
	Jugador();
	Jugador(string);
	~Jugador();



	string toString();


};