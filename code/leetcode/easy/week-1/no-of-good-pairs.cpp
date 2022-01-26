#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        long int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    fastio;
    // code goes here
    return 0;
}