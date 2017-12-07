#pragma once
#include "Polygon.h"
class ListNode
{
public:
	ListNode* nextNode;
	Polygon* data;

	ListNode(ListNode* next, Polygon* polygon);

	~ListNode();
};

