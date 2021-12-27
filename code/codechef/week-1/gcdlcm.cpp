#include <iostream>
using namespace std;

int gcdValue(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int GCD(int a, int b)
{
    if (b % a == 0)
    {
        return a;
    }
    for (int i = a / 2; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        long int a, b;
        cin >> a >> b;
        if (b < a)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        int gcd = GCD(a, b);
        cout << gcd << " " << (a * b) / gcd << endl;
        T = T - 1;
    }
    return 0;
}