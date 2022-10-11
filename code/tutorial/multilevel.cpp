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
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

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
    Employee(string name, int age, string designation, string salary) : Person(name, age)
    {
        SetName(name);
        SetAge(age);
        this->designation = designation;
        this->salary = salary;
    }
    string designation;
    string salary;
};

class Manager : public Employee
{
public:
    Manager(string name, int age, string designation, string salary, string department) : Employee(name, age, designation, salary)
    {
        this->department = department;
    }
    string department;
};

int main()
{
    fastio;
    Manager man("John", 30, "Manager", "100000", "IT");
    cout << man.department;
    Employee em("John", 30, "Manager", "100000");
    cout << em.getName();
    return 0;
}