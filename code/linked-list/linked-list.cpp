#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <set>
#include <map>
using namespace std;

struct node
{
    int data;
    node *next;
};

void print(node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL" << endl;
}

void pushAtEnd(node *&n, int x)
{
    node *m = new node();
    m->data = x;
    if (n == NULL)
    {
        n = m;
        return;
    }
    node *temp = n;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = m;
}

void pushAtStart(node *&head, int val)
{
    node *n = new node();
    n->data = val;
    n->next = head;
    head = n;
}

int search(node *head, int x)
{
    int i = 0;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
            return i;
        temp = temp->next;
        i++;
    }
    return -1;
}

void deletebyvalue(node *&head, int x)
{
    node *n = head;
    node *prev = NULL;
    if (n->data == x)
    {
        head = n->next;
        delete n;
        return;
    }
    else
    {
        while (n != NULL && n->data != x)
        {
            prev = n;
            n = n->next;
        }
        if (n == NULL)
        {
            return;
        }
        prev->next = n->next;
        delete n;
        return;
    }
}

void deletebyindex(node *&head, int x)
{
    int i = 0;
    node *n = head;
    node *prev = NULL;
    if (i == x)
    {
        head = n->next;
        delete n;
        return;
    }
    else
    {
        while (i != x)
        {
            prev = n;
            n = n->next;
            i++;
        }
        if (i == x)
        {
            prev->next = n->next;
            delete n;
            return;
        }
    }
}

void addatindex(node *&head, int x, int y)
{
    int i = 0;
    node *n = head;
    node *temp = new node();
    temp->data = y;
    node *prev = NULL;
    if (i == x)
    {
        temp->next = head;
        head = temp;
        return;
    }
    else
    {
        while (i != x)
        {
            prev = n;
            n = n->next;
            i++;
        }
        if (i == x)
        {
            temp->next = n;
            prev->next = temp;
            return;
        }
    }
}

int findnthll(node *head, int x)
{
    int i = 0;
    node *n = head;
    while (n != NULL && i != x)
    {
        i++;
        n = n->next;
    }
    if (n == NULL)
        return -1;
    return n->data;
}

void deletefromstart(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void deletefromend(node *&head)
{
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->next->next == NULL)
    {
        delete (temp->next);
        temp->next = NULL;
    }
}

int main()
{
    node *head = NULL;
    pushAtStart(head, 4);
    pushAtStart(head, 2);
    pushAtEnd(head, 40);
    print(head);
    return 0;
}