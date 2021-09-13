#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
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
    node *temp = head, *prev = NULL, *todelete = NULL;
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
    todelete = prev;
    prev = temp;
    delete todelete;
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
    llpushatN(head, 9, 4);
    lldeleteN(head, 2);
    llprint(head);
}