#pragma once
#include "JugadorGenerico.h"

class Dealer :public JugadorGenerico {


public:
	Dealer();
	Dealer(string);
	~Dealer();



	string toString();


};