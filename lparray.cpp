
#include <iostream>
using namespace std;


struct info {
    int data;
    info* next;
};

int main()
{
    int size = 10;

    info** head;


    head = new info*[size];


    for (int i = 0; i < size; ++i) {
        *(head + i) = NULL;
    }


    for (int i = 0; i < size; ++i) {

        info* prev = NULL;


        int s = 4;
