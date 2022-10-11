#include <bits/stdc++.h>

using namespace std;

// Insertion Sort
//        4       2 6 1 8 7
//      Sorted | Unsorted
//        2 4      6 1 8 7
//       2 4 6     1 8 7
//      1 2 4 6     8 7
//     1 2 4 6 8     7
//     1 2 4 6 7 8

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}