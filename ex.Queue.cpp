#include <iostream>
using namespace std;
#define SIZE 10

class Queue
{
private:
	double *store;
	int capacity;
	int top;
	int front;
	int rear;
public:
	Queue(int size) : front(0), rear(0)
	{
		capacity = size;
		top = 0;
		store = new double[size];
	}
	~Queue() { delete[]store; }

	int push(double val)
	{
		if (top < capacity)
		{
			store[rear] = val;
			rear = (++rear % capacity);
			top++;
			return 1;
		}
		else
		{
			return 0;
		}
	}

	double pop(void)
	{
		double temp = 0;
		if (top > 0)
		{
			temp = store[front];
			store[front] = 0;
			front = ++front % capacity;
			top--;
			return temp;
		}
		else
		{
			cerr << "Error: pop from an empty stack" << endl;
			return 0;
		}
	}

	void display(void)
	{
		cout << "Queue Contents = ( ";
		for (int i = 0; i < top; i++)
		{
			cout << store[front+i] << ((i < top - 1) ? " | " : " )");
		}
		cout << ", top = " << top << endl;
	}
};

void main() {
	Queue Q(SIZE);

	Q.push(2.0);
	Q.push(11.1);
	Q.push(5.5);
	Q.display();
	cout << "popped value = " << Q.pop() << endl;
	cout << "popped value = " << Q.pop() << endl;
	Q.display();
	Q.push(7.0);
	Q.display();
	cout << "popped value = " << Q.pop() << endl;
	Q.display();
}
