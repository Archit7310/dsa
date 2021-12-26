#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, K, N, rem = 0, max_Rem = 0, min = 0;
    cin >> T;
    while (T--)
    {
        cin >> K >> N;
        if (N < (int)(K / 2 + 1))
        {
            min = N;
        }
        else
        {
            min = (int)(K / 2 + 1);
        }
        while (min > max_Rem)
        {
            rem = K % min;
            if (max_Rem < rem)
            {
                max_Rem = rem;
            }
            min--;
        }
        cout << max_Rem << endl;
    }
    return 0;
}
