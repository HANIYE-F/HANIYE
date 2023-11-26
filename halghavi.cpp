#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
private:
  int items[SIZE], front, rear;

public:
  Queue() {
    front = -1;
    rear = -1;
  }
