#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Stack
{
    int *arr;
    int top;
    int n;

public:
    Stack(int size)
    {
        n = size;
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "stack-overflow" << endl;
            return;
        }
        // here we will first increase top than assign the value
        arr[++top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack-underflow" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "| " << arr[i] << " |" << endl;
        }
    }
};

int main()
{
    fastio;
    Stack s(6);
    s.push(10);
    s.push(20);
    s.push(20);
    s.push(20);
    s.push(20);
    s.pop();
    s.pop();
    s.pop();
    s.print();
    return 0;
}