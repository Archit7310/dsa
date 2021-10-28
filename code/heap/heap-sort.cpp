#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void push(int *&h, int data)
{
}

int main()
{
    fastio;
    int n;
    // size of heap
    cin >> n;
    int *heap = new int[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        push(h, temp);
    }

    return 0;
}