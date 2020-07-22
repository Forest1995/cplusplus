#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>

class Queue
{

public:
    Queue() = default;

    bool add(T value)
    {
        if (isFull())
            return false;
        end = (end + 1) % maxSize;
        queueArray[end] = value;
        nItems++;
        return true;
    }
    T remove()
    {
        if (isEmpty())
        {
            T t;
            return t;
        }
        T temp = queueArray[front];
        front = (front + 1) % maxSize;
        nItems--;
        return temp;
    }
    bool isEmpty()
    {
        return nItems == 0;
    }
    bool isFull()
    {
        return nItems == maxSize;
    }
    T peekFront()
    {
        return queueArray[front];
    }

    T peekEnd()
    {
        return queueArray[end];
    }

private:
    int front = 0;
    int end = -1;
    int maxSize = 128;
    int nItems = 0;
    array<T, 128> queueArray;
};

#endif