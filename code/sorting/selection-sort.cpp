#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

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
    void selectionSort()
    {
        int min_idx;
        for (int i = 0; i < n - 1; i++)
        {
            min_idx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (ar[j] < ar[min_idx])
                    min_idx = j;
            }
            // swapping
            int temp = ar[min_idx];
            ar[min_idx] = ar[i];
            ar[i] = temp;
        }
    }
    ~arr()
    {
        delete[] ar;
    }
};

int main()
{
    fastio;
    int n;
    cin >> n;
    arr a(n);
    a.insertdata();
    a.selectionSort();
    a.printdata();
    return 0;
}