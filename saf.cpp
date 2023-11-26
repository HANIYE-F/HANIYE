#include<iostream>
#include<string>
using namespace std;
const int maxsize=100;
class Queue{
	public:
		int front;
		int rear;
		int arr[maxsize];

	Queue()
	{
		front=-1;
		rear=-1;
	}

	bool isEmpty()
	{
		if(front==-1 && rear==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if (rear == maxsize - 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}



	int enqueue(int a)
	{
		if(isFull())
		{
			return -1;
		}
		else if(isEmpty())
		{
			front=rear=0;
		}
		else{
			rear++;
		}
		arr[rear]=a;
	}

