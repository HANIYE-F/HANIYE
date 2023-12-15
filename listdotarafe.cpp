#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
class DoublyLinkedList {
    private:
    Node* head;
    Node* tail;

public:
	Node* gethead(){return head;}
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    // اضافه کردن گره به ابتدای لیست
    void insertAtBeginning(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL)
            head->prev = newNode;

        head = newNode;

        if (tail == NULL)  // اگر لیست خالی بود، گره اضافه شده به عنوان پایان لیست هم تنظیم شود
            tail = newNode;
    }
