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
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
        int m = min((int)(arr[0] / arr[2]), (int)(arr[1] / arr[3]));
        if (m >= arr[4])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}