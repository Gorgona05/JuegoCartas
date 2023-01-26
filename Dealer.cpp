#include "Dealer.h"

Dealer::Dealer()
{
}

Dealer::Dealer(string a)
{
	nickname = a;
}

Dealer::~Dealer()
{
}

string Dealer::toString()
{
	stringstream s;
	s << "nicname" << nickname;
	return s.str();
}
