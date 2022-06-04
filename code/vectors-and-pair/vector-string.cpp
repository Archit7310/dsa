#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a = "AAAA";
    string b = "BBBB";
    string c = "CCCC";
    int n = 3;
    vector<vector<string>> arr(n);

    arr[0].push_back(a); // I add string 'a' to end of first vector in 'arr'
    arr[0].push_back(b);
    arr[1].push_back(c);
    cout << arr.size() << endl;
    cout << arr[0].size() << endl;
    cout << arr[0][1].length() << endl;
    for (int i = 0; i < arr[0].size(); i++)
    { // print all string in first vector of 'arr'
        cout << arr[0][i] << " ";
    }
}