#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while(!s.empty()){
        cout<<"|"<<s.top()<<"|"<<endl;
        s.pop();
    }
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"after pop"<<endl;
    s.pop();
    while(!s.empty()){
        cout<<"|"<<s.top()<<"|"<<endl;
        s.pop();
    }
    return 0;
}