#include <bits/stdc++.h>
using namespace std;

class QNode {
    public:
    int data;
    QNode* next;
    QNode(int d){
        data = d;
        next = NULL;
    }
};
 
class Queue {
    public:
    QNode *front, *rear;
    Queue(){
        front = rear = NULL;
    }
    void enQueue(int x){
        QNode* temp = new QNode(x);
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deQueue(){
        if (front == NULL)
            return;
        QNode* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
    void display(){
        if (front == NULL)
            return;
        QNode* temp = front;
        while(front!=NULL){
            cout<<front->data<<"<-";
            front = front->next;
        }   
    }
};
 
int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.deQueue();
    q.enQueue(3);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    cout << "Front -> " << (q.front)->data << endl;
    cout << "Rear -> " << (q.rear)->data<<endl;
    q.display();
    q.deQueue();    
}