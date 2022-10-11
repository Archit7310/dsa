#include <iostream>
#include <cstdlib>
using namespace std;

class Array
{
public:
    int A[10];
    int size, length;
};
void Display(Array Arr)
{
    for (int i = 0; i < Arr.length; i++)
    {
        cout << Arr.A[i] << " ";
    }
}
void Rev(Array *arr)
{
    int *B;
    int i, j;
    B = new int[arr->length];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

int main()
{
    Array arr = {{2, 4, 6, 5, 10}, 4, 5};
    // cout << arr.size;
    Rev(&arr);
    Display(arr);
    return 0;
}