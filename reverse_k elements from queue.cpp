//#include"CQueue.h"
//#include"Stack.h"
//#include<iostream>
//using namespace std;
//
//void reverse_k(CQueue<int>& q, int k, int n)
//{
//	Stack<int> s(20);
//	for (int i = 0; i < k; i++)
//	{
//		s.push(q.Dequeue());
//	}
//	while (!s.isEmpty())
//	{
//		q.Enqueue(s.pop());
//	}
//
//	int rem = n - k;
//	for (int j = 0; j < rem; j++)
//	{
//		q.Enqueue(q.Dequeue());
//	}
//}int main()
//{
//	CQueue<int> q(5);
//	q.Enqueue(1);
//	q.Enqueue(2);
//	q.Enqueue(3);
//	q.Enqueue(4);
//	q.Enqueue(5);
//	reverse_k(q, 3, 5);
//	while (!q.isEmpty())
//	{
//		cout << q.Dequeue() << "  ";
//	}
//
//
//
//	return 0;
//}