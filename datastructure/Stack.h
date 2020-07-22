#ifndef STACK_H
#define STACK_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>

class Stack
{

public:
    Stack() = default;
    void push(T value)
    {
        stackList.push_back(value);
    }
    T pop()
    {
        if (!stackList.empty())
        { // checks for an empty Stack
            T popValue = stackList[stackList.size() - 1];
            stackList.pop_back();
            return popValue;
        }
        cout << "The stack is already empty!" << endl;
        T t;
        return t;
    }
    T peek()
    {
        if (!stackList.empty())
        {
            return stackList[stackList.size() - 1];
        }
        T t;
        return t;
    }

private:
    vector<T> stackList;
};

#endif