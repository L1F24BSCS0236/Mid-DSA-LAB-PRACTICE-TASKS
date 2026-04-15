//#include"Stack.h"
//#include<iostream>
//using namespace std;
//
//void reverse(Stack<int>& s)
//{
//	Stack<int> temp(20);
//	while (!s.isEmpty())
//	{
//		temp.push(s.pop());
//	}
//	s = temp;
//}
//int main()
//{
//	int size = 0, data = 0;
//	cout << "Enter size:";
//	cin >> size;
//	Stack<int> s(size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the data:";
//		cin >> data;
//		s.push(data);
//	}
//	cout << "Reversed values:";
//	reverse(s);
//	while (!s.isEmpty())
//	{
//		cout << s.pop() << "  ";
//	}
//	return 0;
//}