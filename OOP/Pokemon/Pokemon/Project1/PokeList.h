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

	void printPokeList();

	~PokeList();
};
