#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

void merge(int *arr, int l, int m, int r)
{
    int lf = l, rf = m + 1, ar[r - l + 1], i = 0, j = 0;
    while (lf <= m && rf <= r)
    {
        if (arr[lf] < arr[rf])
        {
            ar[i] = arr[lf];
            lf++;
        }
        else
        {
            ar[i] = arr[rf];
            rf++;
        }
        i++;
    }
}

void mergeSort(int *arr, int l, int r)
{
    if (r > l)
    {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main()
{
    fastio;
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}