#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string S;
    cin >> S;
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    int N;
    cin >> N;
    while (N--)
    {
        string W;
        bool check1 = true;
        cin >> W;
        for (char c : W)
        {
            bool check = false;
            for (char i : S)
            {
                if (c == i)
                {
                    check = true;
                    break;
                }
            }
            check1 = check;
            if (!check1)
            {
                break;
            }
        }
        if (check1)
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