#pragma once
#include "Ivysaur.h"
class Venusaur :
	public Pokemon
{
public:
	Venusaur(int inXP);
	
	~Venusaur();

	const char* getName();

}; 
