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

      // اضافه کردن گره به انتهای لیست
    void insertAtEnd(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = tail;

        if (tail != NULL)
            tail->next = newNode;

        tail = newNode;

        if (head == NULL)  // اگر لیست خالی بود، گره اضافه شده به عنوان ابتدای لیست هم تنظیم شود
            head = newNode;
    }
    void insertofindex(int n,int data){
    	if(is_empy())
    		insertAtBeginning(n);
    	if(n==1){
    		insertAtBeginning(data);
    		return;}
    	if(size()>n+1 || size()<0)
    		return;
    	if(n==size()+1){
    		insertAtEnd(data);
    		return;
    	}
