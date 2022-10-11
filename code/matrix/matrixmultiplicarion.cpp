#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// strateson matrix multiplication
// O(n^3)
void matrixMultiplication(int n, int m, int p, int q, int a[n][m], int b[p][q], int c[n][q])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    fastio;

    return 0;
}