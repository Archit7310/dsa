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
    cout << "size: " << str.size() << "\n";
    cout << "length: " << str.length() << "\n";
    cout << "capacity: " << str.capacity() << "\n";
    cout << "max_size: " << str.max_size() << "\n";
    replace(str.begin(), str.end(), 'r', ' ');
    str.append("abc");  // append a string
    str.push_back('a'); // push a char
    // str = "()()()";
    // regex reg("\\()");
    // str = regex_replace(str, reg, "o");
    cout << str;
    return 0;
}