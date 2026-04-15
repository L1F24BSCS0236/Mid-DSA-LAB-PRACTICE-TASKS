//#include"LinkeList.h"
//#include"Stack.h"
//#include<iostream>
//using namespace std;
//
//void reverse(Node<int>*& head,int k)
//{ 
//	Stack<int> s(20);
//	int count = 0;
//	Node<int>* current = head;
//	while (current != NULL && count < k)
//	{
//		s.push(current->data);
//		current = current->next;
//		count++;
//	}
//
//	Node<int>* newhead = NULL;
//	Node<int>* tail = NULL;
//	while (!s.isEmpty())
//	{
//		Node<int>* temp = new Node(s.pop());
//		if (newhead == NULL)
//		{
//			newhead = temp;
//			tail = temp;
//		}
//		else
//		{
//			tail->next = temp;
//			tail = temp;
//		}
//	}
//
//	tail->next = current;
//	head = newhead;
//	
//
//}
//
//int main()
//{
//	LinkedList<int> l;
//	l.insertEnd(1);
//	l.insertEnd(2);
//	l.insertEnd(3);
//	l.insertEnd(4);
//	l.insertEnd(5);
//	reverse(l.getHead(), 3);
//	l.display();
//
//
//	return 0;
//}