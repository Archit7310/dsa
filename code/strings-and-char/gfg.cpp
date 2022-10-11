// CPP code to demonstrate replace_if()

#include <iostream>
#include <vector>
#include <algorithm> // Header file for replace_if
using namespace std;

// Function to check if character is vowel or not
bool IsVowel(char ch)
{
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

// Function to replace all vowels with 'V'
void replace_ifDemo(vector<char> &v)
{
    replace_if(v.begin(), v.end(), IsVowel, 'V');
}

// Function to print content of vector
void print(vector<char> &v)
{
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    vector<char> v;

    for (int i = 0; i <= 6; i++)
        v.push_back('A' + i);
    cout << "Before replace_if "
         << ": ";
    print(v);
    replace_ifDemo(v);

    cout << "After replace_if "
         << ": ";
    print(v);

    return 0;
}
