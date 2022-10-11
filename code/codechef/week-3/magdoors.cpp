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
        string s1, s2;
        cin >> s2;
        s1 = s2;
        int n = s1.length(), i = 0, count = 0;
        bool flip = false;
        for (char &c : s2)
        {
            if (c == '0')
                c = '1';
            else
                c = '0';
        }
        while (i < n)
        {
            if (!flip && s1[i] == '1')
            {
                i++;
                continue;
            }
            else if (!flip)
            {
                flip = true;
                count++;
            }
            if (flip && s2[i] == '1')
            {
                i++;
                continue;
            }
            else if (flip)
            {
                flip = false;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}