#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool checkMember(int n)
{
    int a = 0;
    int b = 1;
    int c;
    while (a < n)
    {
        cout << "*" << endl;
        c = a + b;
        a = b;
        b = c;
    }
    if (a == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkmember(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 1; i <= n; i++)
    {
        cout << "#" << endl;
        c = a + b;
        a = b;
        b = c;
    }
    if (a == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    fastio;
    for (int i = 0; i < 15; i++)
    {
        cout << i << " " << checkMember(i) << " " << checkmember(i) << endl;
    }

    return 0;
}