#pragma once
#include "Pokemon.h"

class ListNode
{
public:
	ListNode* nextNode;

	Pokemon* data;

	ListNode(ListNode* next, Pokemon* pokemon);

	~ListNode();
};

