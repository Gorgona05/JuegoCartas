#pragma once
#include "JugadorGenerico.h"

class Nodo {
private:
	JugadorGenerico* dato;
	Nodo* next;
public:
	Nodo();
	Nodo(JugadorGenerico*,Nodo*);
	~Nodo();

};