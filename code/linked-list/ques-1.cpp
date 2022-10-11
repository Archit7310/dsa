#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void print(node *n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<"NULL"<<endl;
}

void pushatend(node* &head,int data){
    node* n = new node();
    n->data=data;
    n->next=NULL;
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

class test {
  public:
    void f(node * );
};
void test::f(node * LIST) {
  if (LIST == 0)
    return;
  else {
    f(LIST -> next);
    cout << LIST -> data;
  }
}

node* insert(node *start){
    node *ptr;
    ptr = start;
    int n=7;
    do{
        ptr=ptr->next;
    }while(ptr!=start->next);
    node *newnode =new node();
    newnode->data=n;
    newnode->next=ptr->next;
    ptr->next=newnode;
    return start;
}

void create(node *&start) {

 node * new_node, * ptr;

  int n;

  cin >> n;

  while (n != -1) {

    if (start == NULL) {

      new_node = new node;

      new_node -> data = n;

      new_node -> next = new_node;

      start = new_node;

    } else {

      ptr = start;

      while (ptr -> next != start)

        ptr = ptr -> next;

      new_node = new node;

      new_node -> data = n;

      new_node -> next = start;

      ptr -> next = new_node;

      start = new_node;

    }

    cin >> n;

  }

}

int main(){
    node *head =NULL;
    // // push at head
    // pushatend(head,3);
    // pushatend(head,8);
    // pushatend(head,5);
    // pushatend(head,6);
    // pushatend(head,4);
    // test t;
    // t.f(head);
    // // 
    // node *again = insert(head);
    // print(again);
    create(head);
    print(head);
    return 0;
}