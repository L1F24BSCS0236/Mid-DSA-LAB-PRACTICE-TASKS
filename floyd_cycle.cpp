#include"LinkeList.h"
#include<iostream>
using namespace std;

bool floyd_cycle(Node<int>*& head)
{
	Node<int>* slow = head;
	Node<int>* fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}