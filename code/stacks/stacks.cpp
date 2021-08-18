#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define n 5

using namespace std;

class Stack{
    int *arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int val){
        if(top==n-1){
            cout<<"stack-overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"stack-underflow"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
    void print(){
        for(int i=top;i>=0;i--){
            cout<<"| "<<arr[i]<<" |"<<endl;
        }
    }
};

int main()
{
    fastio;
    Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.pop();
    s.pop();
    s.print();
    return 0;
}