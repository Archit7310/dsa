#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

int fib(int n)
{
    return n <= 2 ? 1 : fib(n - 1) + fib(n - 2);
}

int main()
{
    fastio;
    int n = fib(3);
    cout << n;
    return 0;
}