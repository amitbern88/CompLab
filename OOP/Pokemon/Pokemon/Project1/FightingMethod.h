#ifndef FIGHTINGMETHOD_H
#define FIGHTINGMETHOD_H

class FightingMethod {

	const char* methodName;
	int lvl;

public:
	FightingMethod();
	FightingMethod(const char* inName, int inLvl);
	~FightingMethod() {};
	const char* getName() { return methodName; };
	int getLvl() { return lvl; };
};

#endif // FIGHTINGMETHOD_H
