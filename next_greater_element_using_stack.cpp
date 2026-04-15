//#include"Stack.h"
//#include<iostream>
//using namespace std;
//
//void next_greater_element(int* arr, int size)
//{
//	Stack<int> s(size);
//	int result[100];
//	for (int i = size-1; i >=0; i--)
//	{
//		while (!s.isEmpty() && s.peek() <= arr[i])
//		{
//			s.pop();
//		}
//		if (s.isEmpty())
//		{
//			result[i] = -1;
//		}
//		else
//		{
//			result[i] = s.peek();
//		}
//		s.push(arr[i]);
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << result[i] << "  ";
//	}
//}
//int main()
//{
//	int arr[5] = { 1,4,5,10,3 };
//	next_greater_element(arr, 5);
//
//
//	return 0;
//}