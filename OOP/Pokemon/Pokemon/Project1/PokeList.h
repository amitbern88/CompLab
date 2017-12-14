#pragma once
#include "ListNode.h"

class PokeList
{
	ListNode* head;
public:
	int size;

	PokeList();

	void add(Pokemon* toAdd);

	Pokemon* get(int index);

	void remove(int index);

	void remove(Pokemon* pokemon);

	void replace(Pokemon* original, Pokemon* newPokemon);

	void printPokeList();

	~PokeList();

private:
	void findPokemonToDelete(Pokemon* pokemon, ListNode* toDelete, ListNode* prevToDelete);
};
