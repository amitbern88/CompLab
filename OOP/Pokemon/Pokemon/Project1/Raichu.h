#pragma once
#include "Pikachu.h"
class Raichu :
	public Pokemon
{
public:
	Raichu(int inXP);

	~Raichu();

	const char* getName();

}; 
