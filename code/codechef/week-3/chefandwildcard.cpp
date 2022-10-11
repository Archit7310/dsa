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
        string a, b;
        cin >> a;
        cin >> b;
        int n = a.length();
        bool check = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == b[i] || a[i] == '?' || b[i] == '?')
            {
                check = true;
            }
            else
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}