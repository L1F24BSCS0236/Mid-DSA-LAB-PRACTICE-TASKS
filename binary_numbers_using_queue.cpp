//#include<iostream>
//#include"CQueue.h"
//#include"Stack.h"
//#include"Queue.h"
//using namespace std;
//
//void binary(Queue<int>& q)
//{
//	Stack<int> s(32);
//	if (q.isEmpty())
//	{
//		return;
//	}
//	int val = q.Dequeue();
//	while (val > 0)
//	{
//		int bin = val % 2;
//		s.push(bin);
//		val = val / 2;
//	}
//	while (!s.isEmpty())
//	{
//		cout << s.pop();
//	}
//	cout << endl;
//	binary(q);
//}
//
//int main()
//{
//	Queue<int> q(6);
//	q.Enqueue(1);
//	q.Enqueue(2);
//	q.Enqueue(3);
//	q.Enqueue(4);
//	q.Enqueue(5);
//	q.Enqueue(6);
//
//	binary(q);
//
//
//	return 0;
//}