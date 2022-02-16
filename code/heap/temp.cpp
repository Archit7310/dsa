#include <iostream>
#include <algorithm>
using namespace std;
struct Interval
{
    int st;
    int et;
};
bool compare(Interval i1, Interval i2)
{
    return i1.st < i2.st;
}
int main()
{
    Interval arr[] = {{6, 4}, {3, 2}, {4, 6}, {8, 13}};
    sort(arr, arr + 4, compare);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].st << ":" << arr[i].et << endl;
    }
    return 0;
}