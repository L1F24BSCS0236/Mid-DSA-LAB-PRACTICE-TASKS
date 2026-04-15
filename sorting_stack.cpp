//#include"Stack.h"
//#include<iostream>
//using namespace std;
//
//void sort_stack(Stack<int>& s)
//{
//	Stack<int> temp(20);
//	while (!s.isEmpty())
//	{
//		int val = s.pop();
//		if (!temp.isEmpty() && temp.peek() > val)
//		{
//			while (!temp.isEmpty() && temp.peek() > val)
//			{
//				s.push(temp.pop());
//			}
//		}
//		temp.push(val);
//	}
//	while (!temp.isEmpty())
//	{
//		s.push(temp.pop());
//	}
//
//}
//int main()
//{
//	Stack<int> s(5);
//	s.push(34);
//	s.push(44);
//	s.push(84);
//	s.push(4);
//	s.push(14);
//
//	sort_stack(s);
//	while (!s.isEmpty())
//	{
//		cout << s.pop() << "  ";
//	}
//	cout << endl;
//
//
//
//	return 0;
//}