#pragma once
#include "ListNode.h"

class LinkedList
{
	ListNode* head;
public:
	int size;

	LinkedList();

	void add(Polygon* toAdd);

	Polygon* get(int index);

	void remove(int index);

	~LinkedList();
};

