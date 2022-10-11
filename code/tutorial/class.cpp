#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Person
{
    string name;
    int age;

public:
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string SetName(string name)
    {
        this->name = name;
    }
    int SetAge(int age)
    {
        this->age = age;
    }
};

class Employee : public Person
{
public:
    string designation;
    string salary;
};

int main()
{
    fastio;
    int n;
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        string name, designation, salary;
        int age;
        cin >> name >> age >> designation >> salary;
        e[i].SetName(name);
        e[i].SetAge(age);
        e[i].designation = designation;
        e[i].salary = salary;
    }
    for (int i = 0; i < n; i++)
    {
        cout << e[i].getName() << " " << e[i].getAge() << " " << e[i].designation << " " << e[i].salary << endl;
    }

    return 0;
}