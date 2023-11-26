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
