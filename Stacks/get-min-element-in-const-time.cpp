//! https://www.youtube.com/watch?v=ufwPuyxkNVE

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class _Stack
{
    stack<int> pStack;
    stack<int> sStack; // Primary and Secondary Stacks

public:
    int getMin()
    {
        return sStack.top();
        //Write your code here
    }

    /*returns poped element from stack*/
    int pop()
    {

        //Write your code here
    }

    /*push element x into the stack*/
    void push(int x)
    {

        //Write your code here
    }
};

int main()
{
    _Stack s;
    s.push(5);
    s.push(3);
    s.push(7);
}