#pragma once
#include <iostream>

using namespace std;

class Pokemon{
	//Types
	enum {
		eFire,
		eAquatic,
		eEarth,
		eElectric
	};

	double mXp;
	char* mType;
	void mPunch();
public:
	Pokemon();
	~Pokemon();
};

