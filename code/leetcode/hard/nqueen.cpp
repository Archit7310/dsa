#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Solution
{
public:
    bool isSafe(vector<string> &nQueen, int row, int col)
    {
        int n = nQueen.size();
        for (int i = 0; i < n; i++)
        {
            if (nQueen[i][col] == 'Q')
                return false;
            if (row - i >= 0 && col - i >= 0 && nQueen[row - i][col - i] == 'Q')
                return false;
            if (row - i >= 0 && col + i < n && nQueen[row - i][col + i] == 'Q')
                return false;
        }
        return true;
    }
    vector<vector<string>> answer;

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> nQueen(n, string(n, '.'));
        backtrackingFunc(nQueen, 0, n);
        return answer;
    }
    void backtrackingFunc(vector<string> &nQueen, int row, int n)
    {
        if (row == n)
        {
            answer.push_back(nQueen);
            return;
        }
        for (int col = 0; col < n; col++)
        {
            if (isSafe(nQueen, row, col))
            {
                nQueen[row][col] = 'Q';
                backtrackingFunc(nQueen, row + 1, n);
                nQueen[row][col] = '.';
            }
        }
        return;
    }
};

int main()
{
    fastio;
    // code goes here
    return 0;
}