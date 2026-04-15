#pragma once
#include<iostream>
using namespace std;

template <class T>
class Queue
{
private:
    int size;
    int front;
    int rear;
    T* arr;

public:

    Queue(int s)
    {
        size = s;
        front = -1;
        rear = -1;
        arr = new T[size];
    }

    bool isFull()
    {
        return (rear == size - 1);
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void Enqueue(T val)
    {
        if (isFull())
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = val;
    }

    T Dequeue()
    {
        T val = arr[front];
        front++;

        return val;
    }

    T getFront()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return -1;
        }

        return arr[front];
    }

    T getRear()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return -1;
        }

        return arr[rear];
    }
};
