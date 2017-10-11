#include <iostream>
using namespace std;
#define SIZE 10

class Queue
{
private:
	double *store;
	int capacity;
	int top;
public:
	Queue(int size)
	{
		capacity = size;
		top = 0;
		store = new double[size];
	}

	~Queue()
	{
		delete[]store;
	}

	int push(double val) 
	{
		if (top < capacity) 
		{
			store[top++] = val;
			return 1;
		}
		else
		{
			return 0;
		}
	}

	double pop(void) 
	{
		if (top > 0)
		{
			return store[--top];
		}
		else 
		{
			cerr << "Error: pop from an empty stack" << endl;
			return 0;
		}
	}

	void display(void) 
	{
		cout << "Stack Contents = ( ";
		for (int i = 0; i < top; i++)
		{
			cout << store[i] << ((i < top - 1) ? " | " : " )");
		}
		cout << ", top = " << top << endl;
	}
};

void main() {
	Queue s(SIZE);

	s.push(2.0); 
	s.push(11.1); 
	s.push(5.5);
	s.display();
	cout << "popped value = " << s.pop() << endl;

	s.display();
	s.push(7.0);
	s.display();
}
