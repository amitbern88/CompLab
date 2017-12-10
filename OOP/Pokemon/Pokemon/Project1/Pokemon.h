#pragma once
class Pokemon
{
	
	int mXp;

	int evolutionLevel;

public:

	enum PokemonType {
		eAquatic,
		eFire,
		eEarth,
		eElectricity
	};

	PokemonType type;

	Pokemon(PokemonType pokeType, int evolutionLevel);
	
	virtual char* getName();

	int getXp();

	bool shouldEvolve();

	Pokemon* evolve();

	int basicAttack();

	~Pokemon();
};

