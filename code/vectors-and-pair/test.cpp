#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int m1;
    int m2;
    int m3;
    int total;
    int rank;
};
bool compareTwoStudents(Student a, Student b)
{
    return a.total > b.total;
}
void computeRanks(Student a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i].total = a[i].m1 + a[i].m2 + a[i].m3;
    sort(a, a + n, compareTwoStudents);
    for (int i = 0; i < n; i++)
        a[i].rank = i + 1;
}

// Driver code
int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].m1;
        cin >> a[i].m2;
        cin >> a[i].m3;
    }

    computeRanks(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].rank << " " << a[i].name;
        cout << "\n";
    }

    return 0;
}