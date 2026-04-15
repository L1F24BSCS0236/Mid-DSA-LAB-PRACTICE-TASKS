//#include"LinkeList.h"
//#include<iostream>
//using namespace std;
//
//void reverse_k_nodes(Node<int>*& head, int k)
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
//}
//int main()
//{
//	LinkedList<int> l1;
//	l1.insertEnd(1);
//	l1.insertEnd(2);
//	l1.insertEnd(3);
//	l1.insertEnd(4);
//	cout << "Normal:";
//	l1.display();
//	cout << "Reversed 2 nodes:";
//	reverse_k_nodes(l1.getHead(), 2);
//	l1.display();
//	cout << endl;
//
//	return 0;
//}