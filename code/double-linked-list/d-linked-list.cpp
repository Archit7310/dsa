#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
};

void print(node *n){
    while(n!=NULL){
        cout<<n->data<<"<->";
        n=n->next;
    }
    cout<<"NULL"<<endl;
}

void insert(node *&head,int newdata) {
   node* n = new node();
   n->data = newdata;
   n->prev = NULL;
   n->next = head;
   if(head != NULL)
    head->prev = n ;
   head = n;
}

void append(node*& head, int new_data){
    node *new_node = new node();
    node *last = head;
    new_node->data = new_data;
    new_node->next = NULL;
    if (head == NULL) {
        new_node->prev = NULL;
        head = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next; 
    last->next = new_node;
    new_node->prev = last;
}

void reverse(node*&head){
    node *tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    while (tail != head) {
        cout << tail->data << "<->";
        tail = tail->prev;
    }
    cout << tail->data <<"<->NULL"<< endl;
}


void deletenode(node*& head, node* del)
{
    if (head == NULL || del == NULL)
        return;
    if (head == del)
        head = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
     free(del);
    return;
}

// this is search by value
int search(node *head,int x){
    int i=1;
    node *temp = head;
    while(temp!=NULL){
        if(temp->data==x)
            return i;
        temp=temp->next;
        i++;
    }
    // cout<<"not found";
    return -1;
}

// search by index
int searchbyindex(node *head,int i){
    int j=1;
    node *temp = head;
    while(temp!=NULL && j!=i){
        j++;
        temp=temp->next;
    }
    if(temp==NULL){
        return -1;
    }
    return temp->data;
}

// 
int main()
{
    fastio;
    node *head=NULL;
    insert(head,10);
    insert(head,12);
    insert(head,13);
    append(head,14);
    append(head,18);
    print(head);
    reverse(head);
    cout<<search(head,14)<<endl;
    searchbyindex(head,90)==-1?cout<<"not found"<<endl:cout<<searchbyindex(head,90)<<endl;
    deletenode(head,head->next->next);
    print(head);
    return 0;
}