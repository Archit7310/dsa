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
        string s;
        cin >> s;
        int n = s.length(), t = 0;
        int temp = n / 2;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = n - 1; j > (n - 1) / 2; j--)
            {
                if (s[i] == s[j])
                {
                    s[i] = '#';
                    s[j] = '*';
                    t++;
                }
            }
        }
        if (t == temp)
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