#include "PokeList.h"
#include <iostream>

using namespace std;

PokeList::PokeList() : size(0), head(NULL)
{
}

void PokeList::add(Pokemon * toAdd)
{
	if (head == NULL)
	{
		head = new ListNode(NULL, toAdd);
	}
	else
	{
		ListNode* iterator = head;
		while (iterator->nextNode != 0)
			iterator = iterator->nextNode;
		ListNode* newNode = new ListNode(NULL, toAdd);
		iterator->nextNode = newNode;
	}
	size++;
}

Pokemon* PokeList::get(int index)
{
	int i;
	ListNode* iterator = head;
	ListNode* prev = 0;
	for (i = 0; i < index; i++)
	{
		prev = iterator;
		iterator = iterator->nextNode;
	}
	return iterator->data;
}

void PokeList::remove(int index)
{
	if (index > size)
	{
		cout << "Illegal index!" << endl;
		return;
	}
	else
	{
		int i;
		ListNode* iterator = head;
		ListNode* prev = NULL;
		for (i = 0; i < index; i++)
		{
			prev = iterator;
			iterator = iterator->nextNode;
		}
		if (prev == NULL)
		{
			head = head->nextNode;
		}
		else
		{
			prev->nextNode = iterator->nextNode;
		}
		delete(iterator->data);
		delete(iterator);
		size--;
	}
}

void PokeList::remove(Pokemon * pokemon)
{
	ListNode* iterator = head;
	ListNode* prev = NULL;
	bool found = false;

	if (head == NULL) return;

	while (!found && iterator->nextNode != NULL)
	{
		if (iterator->data == pokemon)
			found = true;
		else
		{
			prev = iterator;
			iterator = iterator->nextNode;
		}
	}

	if (!found) return;

	if (prev == NULL)
	{
		head = head->nextNode;
	}
	else
	{
		prev->nextNode = iterator->nextNode;
	}
	delete(iterator->data);
	delete(iterator);
	size--;
}

void PokeList::replace(Pokemon * toBeReplaced, Pokemon * replacement)
{
	ListNode* iterator = head;
	bool found = false;

	if (head == NULL) return;

	while (!found && iterator->nextNode != NULL)
	{
		if (iterator->data == toBeReplaced)
			found = true;
		else
			iterator = iterator->nextNode;
	}

	if (!found) return;

	iterator->data = replacement;
}

void PokeList::printPokeList()
{
	if (head == NULL)
	{
		cout << "No Pokemons Left for this player!";
		return;
	}
	ListNode* iterator = head;
	int i = 0;
	while (iterator != NULL)
	{
		cout << i++ << ": " << iterator->data->getName() << endl;
	}
}


PokeList::~PokeList()
{
	if (head != NULL)
	{
		ListNode* iterator = head;
		ListNode* prev = NULL;
		int i;
		for (i = 0; i < size; i++)
		{
			prev = iterator;
			iterator = iterator->nextNode;
			delete(prev->data);
			delete(prev);
		}
	}
}
