#include <bits/stdc++.h>
using namespace std;

struct Queue {
	int front, rear, capacity;
	int* queue;
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}

	~Queue() { delete[] queue; }

	void queueEnqueue(int data)
	{
		if (capacity == rear) {
			cout<<"\nQueue is full\n";
			return;
		}
		else {
			queue[rear] = data;
			rear++;
		}
		return;
	}
	void queueDequeue()
	{
		if (front == rear) {
			cout<<"\nQueue is empty\n";
			return;
		}
		else {
			for (int i = 0; i < rear - 1; i++) {
				queue[i] = queue[i + 1];
			}
			rear--;
		}
		return;
	}
	void queueDisplay()
	{
		int i;
		if (front == rear) {
			cout<<"\nQueue is Empty\n";
			return;
		}
		for (i = front; i < rear; i++) {
			cout<<queue[i]<<"<-";
		}
        cout<<endl;
		return;
	}
	void queueFront()
	{
		if (front == rear) {
			cout<<"\nQueue is Empty\n";
			return;
		}
		cout<<"\nFront Element is:"<<queue[front];
		return;
	}
    int queueRear(){
        return queue[rear];
    }
};

int main()
{
	Queue q(5);
	q.queueDisplay();
    q.queueEnqueue(1);
    q.queueEnqueue(2);
    q.queueDisplay();
    q.queueEnqueue(3);
    q.queueDequeue();
    q.queueDisplay();
    cout<<"\nRear Element is:"<<q.queueRear();
    q.queueFront();
	return 0;
}
