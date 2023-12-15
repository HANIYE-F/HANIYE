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
    		Node* x=head;
    	Node* new_m=new Node;
    	for(int i=0;i<n-2;i++)x=x->next;
    	x->next->prev=new_m;
    	new_m->prev=x;
    	new_m->next=x->next;
    	x->next=new_m;
    	new_m->data=data;
    	delete x;
    	delete new_m;
    }
	int size(){
	   if(is_empy())
	   	return 0;
	   int i=1;
	   Node* x=head;
	   while(x!=tail){
	   	i++;
	   	x=x->next;
	   }
	   return i;
	}
    // حذف گره از لیست
    void deleteNode(int n) {
        Node* x;
        x=head;
        int i=0;
         if (head == NULL)
            return;
        if(n>size())
        	return;
        if(n==size()){
        	deleteend();
        	return;
        }
        if(n==1){
        	deletestart();
        	return;
        }
        while(i<n-1){i++;x=x->next;}


        // اگر گره دارای گره قبلی بود، پیوند بین گره قبلی و گره بعدی را تنظیم کنید
        if (x->prev != NULL)
            x->prev->next = x->next;

        // اگر گره دارای گره بعدی بود، پیوند بین گره بعدی و گره قبلی را تنظیم کنید
        if (x->next != NULL)
            x->next->prev = x->prev;

        delete x;
    }

     void deletestart(){
    	if(is_empy())
    		return;
    	//head->next->next->prev=head;
    	if(head==tail){
    		delete head;
    		return;
    		}
    	head=head->next;
    	head->prev=NULL;
    }
    bool is_empy(){
    	return head==NULL;
    }
    void deleteend(){
    	if(is_empy())
    		return;
    	//head->next->next->prev=head;
    	if(head==tail){
    		delete head;
    		return;
    		}
    	tail=tail->prev;
    	tail->next=NULL;
    }
    void updateindexof(int n,int data){
    	if(size()<n-1)
    		return;
    	Node* x=head;
    	if(n==1)
    		x->data=data;

    	for(int i=0;i<n-1;i++){
    		x=x->next;
    	}
    	x->data=data;
    }
     void concatenate(DoublyLinkedList x){
    	Node*headd=x.gethead();
    	while(headd!=NULL){
    		insertAtEnd(headd->data);
    		headd=headd->next;
    	}
    }
};
