#ifndef FIGHTINGMETHOD_H
#define FIGHTINGMETHOD_H

class FightingMethod {

	char* methodName;
	int lvl;

public:
	FightingMethod();
	FightingMethod(char* inName, int inLvl);
	~FightingMethod() {};
	char* getName() { return methodName; };
	int getLvl() { return lvl; };
};

#endif // FIGHTINGMETHOD_H
