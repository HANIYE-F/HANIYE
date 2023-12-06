
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
         while (s--) {


            info* n = new info;


            n->data = i * s;
            n->next = NULL;


            if (*(head + i) == NULL) {
                *(head + i) = n;
            }
            else {
                prev->next = n;
            }
            prev = n;
        }
    }

    for (int i = 0; i < size; ++i) {
        info* temp = *(head + i);

        cout << i << "-->\t";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << '\n';
    }

    return 0;
}
