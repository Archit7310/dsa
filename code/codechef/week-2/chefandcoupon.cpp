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
        int c, d;
        cin >> d >> c;
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        int day1 = a1 + a2 + a3;
        int day2 = b1 + b2 + b3;
        int cost1 = day1 + day2 + (2 * d);
        int cost2 = day1 + day2 + c;
        if (day1 < 150)
        {
            cost2 += d;
        }
        if (day2 < 150)
        {
            cost2 += d;
        }
        if (cost2 < cost1)
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