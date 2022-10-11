#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class MyHashSet
{
public:
    node *head;
    MyHashSet()
    {
        head = NULL;
    }
    // void add(int key)
    // {
    //     node *n = new node();
    //     n->data = key;
    //     n->next = head;
    //     head = n;
    // }

    void add(int key)
    {
        node *n = new node();
        n->data = key;
        node *temp = head;
        if (temp == NULL)
        {
            head = n;
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

    void remove(int key)
    {
        if (head == NULL)
        {
            return;
        }
        if (head->data == key)
        {
            head = head->next;
        }
        node *temp = head, *prev = NULL;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                prev->next = temp->next;
            }
            prev = temp;
            temp = temp->next;
        }
        }

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }

    bool contains(int key)
    {
        if (head == NULL)
        {
            // cout<<"empty";
            return false;
        }
        node *temp = head;
        while (temp != NULL)
        {
            // cout<<temp->data<<" ";
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main()
{
    MyHashSet obj = MyHashSet();
    obj.add(1);
    obj.add(2);
    obj.add(2);
    obj.add(3);
    obj.add(2);
    obj.remove(2);
    obj.print();
    cout << obj.contains(2);

    return 0;
}