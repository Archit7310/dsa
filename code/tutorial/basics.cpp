#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow!" << endl;
    }
};

class Fish : public Animal
{
public:
    void speak()
    {
        cout << "Glub Glub!" << endl;
    }
};

int main()
{
    fastio;
    int n;
    cin >> n;
    Animal *a[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "dog")
            a[i] = new Dog();
        else if (s == "cat")
            a[i] = new Cat();
        else if (s == "fish")
            a[i] = new Fish();
    }

    return 0;
}