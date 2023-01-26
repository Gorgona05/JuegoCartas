#pragma once
#include "Carta.h"

class Mano :public Carta {


public:
	Mano();
	Mano(int, int);
	~Mano();



	string toString();


};