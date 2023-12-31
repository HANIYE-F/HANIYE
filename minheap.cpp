#include <iostream>
#include <vector>
using namespace std;

class MinHeap
{
 private:
    vector<int> heapArray;  //یک بردار از اعداد صحیح است و عملیات اصلی روی آن انجام میدهد

    void heapify(int index) //تابع کمکی
    {
        int smallest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;

        if (leftChild < heapArray.size() && heapArray[leftChild] < heapArray[smallest])
            smallest = leftChild;

        if (rightChild < heapArray.size() && heapArray[rightChild] < heapArray[smallest])
            smallest = rightChild;

        if (smallest != index)
        {
            swap(heapArray[index], heapArray[smallest]);
            heapify(smallest);
        }
    }
