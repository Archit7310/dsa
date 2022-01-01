#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, count = 0;
        cin >> N >> K;
        int *arr = new int(N);
        while (N--)
        {
            cin >> arr[N - 1];
            if ((arr[N - 1] + K) % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}