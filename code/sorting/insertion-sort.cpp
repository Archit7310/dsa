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

class arr
{
    int *ar;
    int n;

public:
    arr(int size)
    {
        n = size;
        ar = new int[n];
    }
    void insertdata()
    {
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            ar[i] = temp;
        }
    }
    void printdata()
    {
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
    }
    void insertionSort()
    {
        for (int i = 1; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";
            }
            cout << endl;

            int t = i - 1, val = ar[i];
            while (t >= 0 && val < ar[t])
            {
                ar[t + 1] = ar[t];
                t--;
            }
            ar[t + 1] = val;
        }
    }
    ~arr()
    {
        delete[] ar;
    }
};

int main()
{
    int n;
    cin >> n;
    arr a(n);
    a.insertdata();
    a.insertionSort();
    a.printdata();
    return 0;
}