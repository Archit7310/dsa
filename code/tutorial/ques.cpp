#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int operate(int a, int b)
{
    return a + b;
}
float operate(float a, float b)
{
    return a / b;
}

bool checkPrime(int n, int i = 2)
{
    if (n <= 2)
    {
        return (n == 2) ? true : false;
    }
    if (n % i == 0)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }
    return checkPrime(n, i + 1);
}

int main()
{
    fastio;

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    // }
    return 0;
}