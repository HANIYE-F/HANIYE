#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;
};

void printList(Node* n)
{


    while (n != NULL) {


        cout << n->data << " ";
        n = n->next;
    }
}

