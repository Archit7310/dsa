#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
};

void llprint(node *n)
{
    while (n != NULL)
    {
        if (n->next == NULL)
        {
            cout << n->data;
        }
        else
        {
            cout << n->data << "->";
        }
        n = n->next;
    }
    cout << endl;
}

void llpushatStart(node *&head, int data)
{
    node *n = new node();
    n->data = data;
    n->next = head;
    head = n;
}

void llpushatEnd(node *&head, int data)
{
    node *n = new node();
    n->data = data;
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
    // as we passed the head as a reference so changes in the adress will happen in our main LL.
    temp->next = n;
}

void llpushatN(node *&head, int data, int index)
{
    node *n = new node();
    int i = 0;
    n->data = data;
    node *temp = head, *prev = NULL;
    if (index == 0)
    {
        n->next = temp;
        head = n;
        return;
    }
    while (i != index)
    {
        if (temp->next == NULL)
        {
            cout << "index not found \n";
            return;
        }
        i++;
        prev = temp;
        temp = temp->next;
    }
    n->next = temp;
    prev->next = n;
}

void lldeleteN(node *&head, int index)
{
    int i = 0;
    if (head == NULL)
    {
        cout << "LL is empty \n";
        return;
    }
    node *temp = head, *prev = NULL;
    if (index == 0)
    {
        head = head->next;
        return;
    }
    while (i != index)
    {
        if (temp->next == NULL)
        {
            cout << "index not found\n";
            return;
        }
        i++;
        prev = temp;
        temp = temp->next;
    }
    // temp will contain the ith node so we have to delete that ith node
    prev->next = temp->next;
    delete temp;
}

void llreverseList(node *&head)
{
    node *curr = head, *rev = NULL;
    while (curr != NULL)
    {
        node *n = curr;
        curr = curr->next;
        n->next = rev;
        rev = n;
    }
    head = rev;

    // node *current, *prev = NULL, *next;
    // current = head;
    // while (current != NULL)
    // {
    //     next = current->next;
    //     current->next = prev;
    //     prev = current;
    //     current = next;
    // }
    // head = prev;
}

// reverse a linked list using recursion
void llreverseListR(node *&n, node *&rev)
{
    if (n == NULL)
    {
        return;
    }
    node *next = n->next;
    n->next = rev;
    rev = n;
    n = next;
    llreverseListR(n, rev);
}

void llprintR(node *n)
{
    if (n == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    // llprintR(n->next); // this will print in reverse order
    cout << n->data << "->";
    llprintR(n->next); // this will print in same order
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        llpushatEnd(head, data);
    }
    llreverseList(head);
    llprint(head);
    // cout << head->next->next->next->data;
}