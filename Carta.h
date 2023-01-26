#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Carta {
protected:
	int valor;
	int palo;
	//bool bocaAbajo();


public:
	Carta();
	Carta(int,int);
	~Carta();

	//bool bocaAbajo();
	int getValor();
	int getPalo();
	virtual string toString()=0;


};