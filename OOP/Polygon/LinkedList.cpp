#include "LinkedList.h"

LinkedList::LinkedList() : size(0), head(NULL)
{
}

void LinkedList::add(Polygon * toAdd)
{
	if (head == NULL)
	{
		head = new ListNode(NULL, toAdd);
	}
	else
	{
		ListNode* iterator = head;
		while (iterator->nextNode != NULL) 
			iterator = iterator->nextNode;
		ListNode* newNode = new ListNode(NULL, toAdd);
		iterator->nextNode = newNode;
	}
	size++;
}

Polygon * LinkedList::get(int index)
{
	int i;
	ListNode* iterator = head;
	ListNode* prev = NULL;
	for (i = 0; i < index; i++)
	{
		prev = iterator;
		iterator = iterator->nextNode;
	}
	return iterator->data;
}

void LinkedList::remove(int index)
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
		cout << "Polygon at index " << index << " was deleted" << endl;
	}
}


LinkedList::~LinkedList()
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
