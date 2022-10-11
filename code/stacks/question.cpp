#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// reverse a string time compl.  O(n)   space complexity.    O(n)
// there can be an optimized way of doing this too byusing 2 pointer one at starting one at end

void reverse(char *s)
{
    stack<char> c;
    for (int i = 0; s[i] != '\0'; i++)
    {
        c.push(s[i]);
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = c.top();
        c.pop();
    }
}

int main()
{
    fastio;
    char s[100];
    cin.get(s, 100);
    reverse(s);
    cout << '\n'
         << s;

    return 0;
}