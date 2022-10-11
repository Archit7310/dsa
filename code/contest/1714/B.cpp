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
        int n;
        cin >> n;
        vector<int> v;
        while (n--)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int i = 0, size = v.size();
        while (i < size)
        {
            set<int> s;
            for (int j = i; j < size; j++)
            {
                s.insert(v[j]);
            }
            if (s.size() == size - i)
            {
                cout << i << endl;
                break;
            }
            i++;
        }
        if (i == size)
            cout << size - 1 << endl;
    }
    return 0;
}