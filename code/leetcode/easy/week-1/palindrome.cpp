#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        long int n = x, reversedNumber = 0, remainder;
        while (n != 0)
        {
            remainder = n % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            n /= 10;
        }
        if (x < 0)
        {
            return false;
        }
        if (x == reversedNumber)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    fastio;
    Solution a;
    int x;
    cin >> x;
    cout << a.isPalindrome(x);
    return 0;
}