#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string str("Test string");
    for (string::iterator it = str.begin(); it != str.end(); ++it)
        cout << *it;
    cout << '\n';

    // reverse iterators
    for (string::reverse_iterator rit = str.rbegin(); rit != str.rend(); ++rit)
        cout << *rit;

    return 0;
}