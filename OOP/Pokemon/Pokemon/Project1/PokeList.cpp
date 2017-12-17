#include "PokeList.h"
#include <iostream>

using namespace std;

PokeList::PokeList() :  head(NULL) , size(0)
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
		ListNode* newNode = new ListNode(head, toAdd);
		head = newNode;
	}
	size++;
}

Pokemon* PokeList::get(int index)
{
	int i;
	ListNode* iterator = head;
	for (i = 1; i < index; i++)
	{
		iterator = iterator->nextNode;
	}
	return iterator->data;
}

void PokeList::remove(Pokemon* pokemon)
{
	ListNode* toDelete = head;
	ListNode* prevToDelete = NULL;
	findPokemonToDelete(pokemon, toDelete, prevToDelete); //delete pokemon and move list pointer
	if (toDelete == NULL)
	{
		cout << pokemon->getName() << " is not in this list!" << endl;
		return;
	}
	if (prevToDelete == NULL)
	{
		head = head->nextNode;
	}
	else
	{
		prevToDelete->nextNode = toDelete->nextNode;
	}
	cout << "Oh no! " << pokemon->getName() << " was killed!" << endl << endl;
	delete(toDelete->data);
	delete(toDelete);
	size--;
}

void PokeList::replace(Pokemon * original, Pokemon * newPokemon) //when a pokemon is evolving we need to get the next stage and delete the old one
{
	ListNode* originalNode = head;
	ListNode* prevOriginalNode = NULL;
	findPokemonToDelete(original, originalNode, prevOriginalNode);
	if (originalNode != NULL)
	{
		cout << endl << original->getName() << " has evolved to " << newPokemon->getName() << "!\n" << endl;
		Pokemon* toDelete = originalNode->data;
		originalNode->data = newPokemon;
		delete(toDelete);
	}
	else
	{
		cout << original->getName() << " isn't in this list, couldn't replace" << endl;
	}
}

void PokeList::printPokeList()
{
	if (head == NULL)
	{
		cout << "No Pokemons Left for this player!";
		return;
	}
	ListNode* iterator = head;
	int i = 1;
	while (iterator != NULL)
	{
		cout << i++ << ": " << iterator->data->getName() << "	XP: " << iterator->data->getXP() << endl;
		iterator = iterator->nextNode;
	}
	cout << endl;
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

void PokeList::findPokemonToDelete(Pokemon * pokemon, ListNode *& toDelete, ListNode *& prevToDelete)
{
	bool found = false;
	while (!found && toDelete != NULL)
	{
		if (toDelete->data == pokemon)
		{
			found = true;
			break;
		}
		prevToDelete = toDelete;
		toDelete = toDelete->nextNode;
	}
}
