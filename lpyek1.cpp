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
 void inserteonindexof(string name,int n) {
        Node* newNode = new Node;
        newNode->name = name;
        Node* x=new Node;
        x=head;
        for(int i=0;i<n-2;i++)x=x->next;
        newNode->next=x->next;
        x->next=newNode;
        cout << "Node inserted successfully!\n";
    }

    // Method to delete a node by name
    void deleteNode(string name) {
        if(isEmpty()){
	   	cout << "ERROR";
	   	return;
	   }
        Node* currNode = head;
        Node* prevNode = NULL;
        while (currNode != NULL) {
            if (currNode->name == name) {
                if (prevNode == NULL) {
                    head = currNode->next;
                } else {
                    prevNode->next = currNode->next;
                }
                delete currNode;
                cout << "Node deleted successfully!\n";
                return;
            }
            prevNode = currNode;
            currNode = currNode->next;
        }
        cout << "No node found with the given name!\n";
    }
	void delete_indexof(int n){
	   if(isEmpty()){
	   	cout << "ERROR";
	   	return;
	   }
	   Node* x_n=new Node;
	   x_n=head;
	   if(n==1){
	   	delete_begin();
	   	cout << "Node deleted successfully!\n";
