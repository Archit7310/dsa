#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int &a = arr[0], &b = arr[n - 1];
        }
    return 0;
}