#pragma once

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class JugadorGenerico {
protected:
	string nickname;
	/*Mano* mano;*/

public:
	JugadorGenerico();
	~JugadorGenerico();

	string getNickname();

	virtual string toString()=0;

};