#include<iostream>
using namespace std;
struct Node {
    string name;
    Node* next;
};

// Class for LinkedInList
class LinkedInList {
private:
    Node* head;

public:
    // Constructor
    LinkedInList() {
        head = NULL;
    }
 // Method to check if the list is empty
    bool isEmpty() {
        return (head == NULL);
    }
    // Method to insert a new node at the beginning of the list
    void insertend(string name) {
        if(isEmpty()){
        	insertbegin(name);
        	return;
	   }
        Node* newNode = new Node;
        newNode->name = name;
        Node* x=new Node;
        x=head;
        while(x->next!=NULL)x=x->next;
        x->next=newNode;
        cout << "Node inserted successfully!\n";
    }

    void insertbegin(string name) {
        Node* newNode = new Node;
        newNode->name = name;
        newNode->next = head;
        head = newNode;
        cout << "Node inserted successfully!\n";
    }
