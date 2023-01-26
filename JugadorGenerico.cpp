#include "JugadorGenerico.h"

JugadorGenerico::JugadorGenerico()
{
	nickname = "";

}

JugadorGenerico::~JugadorGenerico()
{
	//delete mano;
}

string JugadorGenerico::getNickname()
{
	return nickname;
}
