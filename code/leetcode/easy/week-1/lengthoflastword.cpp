#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    // cin >> s;
    getline(cin, s);
    int count = 0, n = s.length();
    // cout << n;
    // cout << s[1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (count == 0 && s[i] == ' ')
        {
            continue;
        }
        else if (s[i] != ' ')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;

    return 0;
}

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0, n = s.length();
        for (int i = n - 1; i >= 0; i--)
        {
            if (count == 0 && s[i] == ' ')
            {
                continue;
            }
            else if (s[i] != ' ')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};