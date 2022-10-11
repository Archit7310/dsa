#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code goes here
    int size_a, size_b;
    cin >> size_a >> size_b;
    vector<string> a, b;
    // taking input for array of strings A
    for (int i = 0; i < size_a; i++)
    {
        string temp;
        cin >> temp;
        a.push_back(temp);
    }
    // taking input for array of strings B
    for (int i = 0; i < size_b; i++)
    {
        string temp;
        cin >> temp;
        b.push_back(temp);
    }
    // printing the cross of A x B
    for (auto c : a)
    {
        for (auto d : b)
        {
            string temp = c + " " + d;
            cout << temp << endl;
        }
    }

    return 0;
}