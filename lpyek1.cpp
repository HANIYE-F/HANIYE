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
	return;
	   }
	   for(int i=0;i<n-2;i++)x_n=x_n->next;
	   x_n->next=x_n->next->next;
	   cout << "Node deleted successfully!\n";
	}
	void delete_begin(){head=head->next;
	cout << "Node deleted successfully!\n";
	}

	void delete_end(){
	   if(isEmpty()){
	   	cout << "ERROR";
	   	return;
	   }
	   Node* xn=new Node;
	   xn=head;
	   while(xn->next->next!=NULL)xn=xn->next;
	   xn->next=NULL;
	   cout << "Node deleted successfully!\n";
	}
    // Method to display all the nodes in the list
    void displayList() {
        if (isEmpty()) {
            cout << "List is empty!\n";
            return;
        }

        Node* currNode = head;
        cout << "LinkedInList: \n";
        while (currNode != NULL) {
            cout << "Name: " << currNode->name<< endl;
            currNode = currNode->next;
        }
    }
    int size(){
    	if(isEmpty())
    		return 0;
	   int i=1;
	   Node* x=head;
	   while(x->next!=NULL){
	   	i++;
	   	x=x->next;
	   }
	   return i;
	}
	void updateindexof(int n,string data){
    	if(size()<n-1)
    		return;
    	Node* x=head;
    	if(n==1)
    		x->name=data;

    	for(int i=0;i<n-1;i++){
    		x=x->next;
    	}
    	x->name=data;
    }
    void concatenate(LinkedInList x){
    	Node*headd=x.head;
    	while(headd!=NULL){
    		insertend(headd->name);
    		headd=headd->next;
    	}
    }
};
int main() {
   LinkedInList linkedList;
   LinkedInList x;
   x.insertbegin("q");
    // Inserting nodes into the list
    //linkedList.insertbegin("John");
    linkedList.insertend("Alice");
    linkedList.insertbegin("Ali");
    linkedList.insertend("Mill");
    linkedList.insertend("ehs");
    linkedList.displayList();

    // Displaying the list
    linkedList.displayList();
    linkedList.inserteonindexof("Mil",2);
    linkedList.displayList();
    linkedList.concatenate(x);
    // Deleting a node
    //linkedList.delete_begin();
    //linkedList.displayList();
    //linkedList.delete_end();
    // Displaying the updated list
    //linkedList.delete_indexof(1);
    linkedList.displayList();
    return 0;
}
