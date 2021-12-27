#include <bits/stdc++.h>
using namespace std;

int maxrem(int K, int N)
{
    // edge case
    if (N > K)
    {
        return K;
    }
    long int max_Rem = INT_MIN, min = 0;
    if (N < K / 2 + 1)
    {
        min = N;
    }
    else
    {
        min = K / 2 + 1;
    }
    // cout << min<< endl;
    while (min > max_Rem)
    {
        int rem = K % min;
        if (max_Rem < rem)
        {
            max_Rem = rem;
        }
        min--;
    }
    return max_Rem;
}

int maxRem(int K, int N)
{
    int max = INT_MIN;
    for (int i = 1; i <= N; i++)
    {
        int val = K % i;
        if (val > max)
        {
            max = val;
        }
    }
    return max;
}

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int N, K;
        cin >> K >> N;
        cout << maxRem(K, N) << endl;
        T = T - 1;
    }
    return 0;
}
