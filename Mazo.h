#pragma once
#include "Carta.h"

class Mazo :public Carta {


public:
	Mazo();
	Mazo(int,int);
	~Mazo();



	string toString();


};