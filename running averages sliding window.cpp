//#include"CQueue.h"
//#include"Queue.h"
//#include<iostream>
//using namespace std;
//
//#include<iostream>
//using namespace std;
//
//void running_avg(int* arr, int n, int k)
//{
//    int sum = 0;
//
//    // first window
//    for (int i = 0; i < k; i++)
//    {
//        sum += arr[i];
//    }
//
//    // print first window
//    cout << "[ ";
//    for (int i = 0; i < k; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "] avg = " << (float)sum / k << endl;
//
//    // sliding windows
//    for (int i = k; i < n; i++)
//    {
//        sum += arr[i];
//        sum -= arr[i - k];
//
//        // print window
//        cout << "[ ";
//        for (int j = i - k + 1; j <= i; j++)
//        {
//            cout << arr[j] << " ";
//        }
//
//        cout << "] avg = " << (float)sum / k << endl;
//    }
//}
//
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	running_avg(arr, 5, 2);
//
//
//	return 0;
//}