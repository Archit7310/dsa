#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = make_pair(a[i], b[i]);
    }
    auto comp = [](pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        else
        {
            return a.first < b.first;
        }
    };
    sort(p, p + n, comp);
    long long int ans = INT_MAX;
    int startingLenght = p[0].first;
    int endingLenght = p[n - 1].first;
    for (int i = startingLenght; i <= endingLenght; i++)
    {
        long long int mincost = 0;
        for (int j = 0; j < n; j++)
        {
            long long int M = abs(p[j].first - i);
            mincost += (M * p[j].second);
        }
        ans = min(ans, mincost);
    }
    cout << ans;
    return 0;
}