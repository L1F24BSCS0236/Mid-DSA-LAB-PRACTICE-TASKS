//#include"Queue.h"
//#include"CQueue.h"
//#include<iostream>
//using namespace std;
//
//void reverse(CQueue<int>& q)
//{
//	if (q.isEmpty())
//	{
//		return;
//	}
//	else
//	{
//		int x = q.Dequeue();
//		reverse(q);
//		q.Enqueue(x);
//	}
//}
//
//int main()
//{
//	CQueue<int> q(3);
//	q.Enqueue(1);
//	q.Enqueue(2);
//	q.Enqueue(3);
//	reverse(q);
//	while (!q.isEmpty())
//	{
//		cout << q.Dequeue() << " ";
//	}
//	cout << endl;
//
//
//	return 0;
//}