#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *link;
};

void push(node *&top, int data)
{
	node *temp = new node();
	temp->data = data;
	temp->link = top;
	top = temp;
}
int isEmpty(node *&top)
{
	return top == NULL;
}
int peek(node *&top)
{
	if (!isEmpty(top))
		return top->data;
	else
		return;
}

void pop(node *&top)
{
	node *temp;
	if (top == NULL)
	{
		cout << "\nStack Underflow" << endl;
		return;
	}
	else
	{
		temp = top;
		top = top->link;
		temp->link = NULL;
		free(temp);
	}
}

void print(node *&top)
{
	node *temp;
	if (top == NULL)
	{
		cout << "\nStack Underflow";
		return;
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{
			cout << "|" << temp->data << "|" << endl;
			temp = temp->link;
		}
	}
}

int main()
{
	node *top = NULL;

	push(top, 10);
	push(top, 20);
	push(top, 30);
	push(top, 40);
	print(top);
	cout << "\nTop element is " << peek(top) << endl;
	pop(top);
	pop(top);
	print(top);
	cout << "\nTop element is " << peek(top) << endl;
	return 0;
}
