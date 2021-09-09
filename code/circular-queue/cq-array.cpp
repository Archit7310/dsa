#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int rear, front;

    int size;
    int *arr;
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    //  en queue
    void enQueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "queue is full\n";
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    // de queue
    int deQueue()
    {
        if (front == -1)
        {
            cout << "empty queue\n";
            return INT_MIN;
        }

        int data = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
            front = 0;
        else
            front++;

        return data;
    }
    // display
    void displayQueue()
    {
        if (front == -1)
        {
            cout << "empty queue\n";
            return;
        }
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << "<->";
        }
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << "<->";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << "<->";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.displayQueue();
    q.deQueue();
    q.enQueue(5);
    q.enQueue(7);
    q.enQueue(8);

    q.displayQueue();
    return 0;
}
