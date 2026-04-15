//#include"CQueue.h"
//using namespace std;
//void rotation(CQueue<int>& q,int n,int k)
//{
//	k = k % n;
//	for(int i=0;i<k;i++)
//	{
//		q.Enqueue(q.Dequeue());
//	}
//}
//int main()
//{
//	CQueue<int> q(5);
//	q.Enqueue(1);
//	q.Enqueue(2);
//	q.Enqueue(3);
//	q.Enqueue(4);
//	q.Enqueue(5);
//	rotation(q, 5,1);
//	cout << "K Rotated queue:" << endl;
//	while (!q.isEmpty())
//	{
//		cout << q.Dequeue() << " ";
//	}
//
//
//	return 0;
//}