// #include <bits/stdc++.h>

// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)

// #define endl "\n"

// using namespace std;

// bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
// {
//     stack<int> s;
//     int i = 0, j = 0;
//     while (i < pushed.size())
//     {
//         if (!s.empty() && s.top() == popped[j])
//         {
//             s.pop();
//             j++;
//         }
//         else
//         {
//             s.push(pushed[i]);
//             i++;
//         }
//     }
//     while (!s.empty() && s.top() == popped[j])
//     {
//         s.pop();
//         j++;
//     }
//     if (j == popped.size())
//         return true;
//     return false;
// }

// int main()
// {
//     fastio;
//     int n;

//     return 0;
// }
// Amazon Engineering maintains a large number of logs of operations across all
// products. A software engineer is debugging an issue in a product. An efficient way to
// analyze logs is to write automated scripts to check for patterns. The engineer wants to
// find the maximum number of times a target word can be obtained by rearranging a
// subset of characters in a log entry.
// Given a log entry s and target word t, the target word can be obtained by
// selecting some subset of characters from s that can be rearranged to form string t and
// removing them from s. Determine the maximum number of times the target word can
// be removed from the given log entry.
// Input: s = "abcd", t = "abc"
// Output: 1
// Explanation: The target word can be obtained by rearranging the characters of s.
// Example 2:
// Input: s = "abcd", t = "abcd"
// Output: 2
// Explanation: The target word can be obtained by rearranging the characters of s.
// Example 3:
// Input: s = "abcd", t = "cdab"
// Output: 0
// Explanation: The target word cannot be obtained by rearranging the characters of s.
// Example 4:
// Input: s = "abcd", t = "cbad"
// Output: 0
// Explanation: The target word cannot be obtained by rearranging the characters of s.
// Example 5:
// Input: s = "abcd", t = "acdb"

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int countMaximumOperations(string s, string t)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[0])
        {
            int j = i;
            while (j < s.size() && s[j] == t[0])
            {
                j++;
            }
            count += (j - i);
        }
    }
    return count;
}

int main()
{
    fastio;
    int n;
    cout << countMaximumOperations("mononom", "mon");
    return 0;
}