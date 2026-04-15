//#include"LinkeList.h"
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool is_palindrome(Node<char>*& head)
//{
//	Node<char>* slow = head;
//	Node<char>* fast = head;
//
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//
//	Node<char>* current = slow;
//	Node<char>* prev = NULL;
//	Node<char>* next = NULL;
//
//	while (current != NULL)
//	{
//		next = current->next;
//		current->next = prev;
//		prev = current;
//		current = next;
//	}
//
//	Node<char>* start = head;
//	Node<char>* end = prev;
//
//	while (end != NULL)
//	{
//		if (end->data != start->data)
//		{
//			return false;
//		}
//		end = end->next;
//		start = start->next;
//	}
//	return true;
//}
//int main()
//{
//	LinkedList<char> l;
//	l.insertEnd('h');
//	l.insertEnd('e');
//	l.insertEnd('l');
//	l.insertEnd('l');
//	l.insertEnd('o');
//	if (is_palindrome(l.getHead()) == true)
//	{
//		cout << "The link list is palindrome!" << endl;
//	}
//	else
//	{
//		cout << "The link list is not palindrome!" << endl;
//	}
//
//	return 0;
//}