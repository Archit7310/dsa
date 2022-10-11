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
        int n, i = 1, count = 0;
        cin >> n;
        while (n > 0)
        {
            // cout << n << " " << i << endl;
            n = n - i;
            i++;
            if (n >= 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}