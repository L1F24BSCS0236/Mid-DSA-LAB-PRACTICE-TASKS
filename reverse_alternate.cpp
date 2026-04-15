//#include"LinkeList.h"
//#include<iostream>
//using namespace std;
//
//void reverse_alternate(Node<int>*& head, int k)
//{
//	Node<int>* current = head;
//	Node<int>* prev = NULL;
//	Node<int>* next = NULL;
//	int count = 0;
//	while (current != NULL && count < k)
//	{
//		next = current->next;
//		current->next = prev;
//		prev = current;
//		current = next;
//		count++;
//	}
//	if (head != NULL)
//	{
//		head->next = current;
//	}
//	head = prev;
//
//	count = 0;
//	while (current != NULL && count < k - 1)
//	{
//		current = current->next;
//		count++;
//	}
//	if (current!=NULL&&current->next!=NULL)
//	{
//		reverse_alternate(current->next, k);
//	}
//
//
//}
//
//int main()
//{
//	LinkedList<int> l1;
//	l1.insertEnd(1);
//	l1.insertEnd(2);
//	l1.insertEnd(3);
//	l1.insertEnd(4);
//	l1.insertEnd(5);
//	l1.insertEnd(6);
//
//	reverse_alternate(l1.getHead(), 2);
//	l1.display();
//	return 0;
//}