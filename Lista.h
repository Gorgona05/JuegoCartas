#pragma once
#include "Nodo.h"

class Lista {
private:
	Nodo* inicio;

public:
	Lista();
	Lista(Nodo*);
	~Lista();

	Nodo* getLista();
};