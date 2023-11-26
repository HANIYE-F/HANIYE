#include<iostream>
#include<string>
using namespace std;

const int maxsize = 5;

class Queue {
private:
    int stack1[maxsize];
    int stack2[maxsize];
    int top1;
    int top2;

public:
    Queue() {
        top1 = -1;
        top2 = -1;
    }
