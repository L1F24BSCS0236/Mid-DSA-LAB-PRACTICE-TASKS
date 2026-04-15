//#include"LinkeList.h"
//#include<iostream>
//using namespace std;
//
//void find_promote(Node<int>*& head, int k)
//{
//    Node<int>* current = head;
//    Node<int>* prev = NULL;
//
//    while (current != NULL)
//    {
//        Node<int>* next = current->next;
//
//        if (current->data == k)
//        {
//            // if current is not already head
//            if (prev != NULL)
//            {
//                prev->next = current->next;
//            }
//            else
//            {
//                head = current->next;
//            }
//
//            // move to front
//            current->next = head;
//            head = current;
//        }
//        else
//        {
//            prev = current;
//        }
//
//        current = next;
//    }
//}
//
//
//int main()
//{
//	LinkedList<int> l1;
//	l1.insertEnd(1);
//	l1.insertEnd(2);
//	l1.insertEnd(2);
//	l1.insertEnd(3);
//	find_promote(l1.getHead(), 2);
//	l1.display();
//	return 0;
//}