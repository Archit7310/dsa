#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class MainIncome
{
public:
    float income = 80000;
};

class SideIncome
{
public:
    float income = 8000;
};

class Income : public MainIncome, public SideIncome
{
public:
    void getIncome()
    {
        cout << "Total salary of the person.." << (MainIncome::income + SideIncome::income) << endl;
    }
};
int main()
{
    Income vidit;
    vidit.getIncome();
    return 0;
}