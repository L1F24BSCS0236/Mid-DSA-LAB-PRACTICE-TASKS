//#include"Stack.h"
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool is_balanced(Stack<char>& s,string d)
//{
//	for (int i = 0; i < d.length(); i++)
//	{
//		char ch = d[i];
//		if (ch == '[' || ch == '(' || ch == '{')
//		{
//			s.push(ch);
//		}
//		else if (ch == ')' || ch == ']' || ch == '}')
//		{
//			char brac = s.pop();
//			if (ch =='('&& brac!=')'||ch=='{'&&brac!='}'||ch=='['&&brac!=']')
//			{
//				return false;
//			}
//		}
//	}
//	if (s.isEmpty())
//	{
//		return true;
//	}
//}
//
//int main()
//{
//	Stack<char> s(20);
//	string d;
//	cout << "Enter brackets:";
//	getline(cin, d);
//	if (is_balanced(s, d) == true)
//	{
//		cout << "The parenthesis are balanced!" << endl;
//	}
//	else
//	{
//		cout << "The parenthesis are not balanced!" << endl;
//
//	}
//
//
//	return 0;
//}