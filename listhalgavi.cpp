#include<iostream>
using namespace std;

// تعریف ساختار یک عنصر در لیست پیوندی
struct Node {
   int data;
   Node* next;
};

// تابع برای ساختن یک لیست پیوندی حلقوی
int size(Node* head){
	if(head==NULL)
		return 0;
		Node*x=head;
	int i=1;
	while(x->next!=head){x=x->next;
	i++;}
	return i;
}
Node* createCircularLinkedList(int data) {
   // ایجاد یک عنصر به صورت دایره ای
   Node* newNode = new Node;
   newNode->data = data;
   newNode->next = newNode; // تنظیم next عنصر به خود عنصر

   return newNode;
}
// تابع برای افزودن یک عنصر به لیست پیوندی حلقوی
Node* insertNodeend(Node* head, int data) {
   // اگر لیست خالی است
   if (head == NULL) {
      return createCircularLinkedList(data);
   }

   // تعیین عنصر آخر لیست
   Node* last = head;
   while (last->next != head) {
      last = last->next;
   }

   // ایجاد عنصر جدید
   Node* newNode = new Node;
   newNode->data = data;

   // اتصال عنصر جدید به عنصر آخر لیست
   last->next = newNode;

   // اتصال عنصر جدید به شروع لیست
   newNode->next = head;

   return head;
}
// تابع برای نمایش لیست پیوندی حلقوی
void displayCircularLinkedList(Node* head) {
   // اگر لیست خالی است
   if (head == NULL) {
      cout << "لیست پیوندی حلقوی خالی است." << endl;
      return;
   }

   Node* current = head;

   // نمایش هر عنصر در لیست
   do {
      cout << current->data << " ";
      current = current->next;
   } while (current != head);

   cout << endl;
}
Node* insertstart(Node* head,int data){

	return head;
}
Node* insertofindex(Node* head,int n,int data){
	if(n==1)
		return insertstart(head,data);
	if(n-1==size(head))
		return insertNodeend(head,data);
	if(n>size(head)){
		cout<<"error...\n";
		return head;
	}
	Node* xx=head;
	for(int i=0;i<n-2;i++)head=head->next;
	Node* newnode=new Node;
	newnode->data=data;
	newnode->next=head->next;
	head->next=newnode;
	return xx;
}
Node* deletestart(Node* head){
	Node* last = head;
   while (last->next!= head)last = last->next;
	last->next=head->next;
	head=head->next;
	return head;
}
Node* deleteend(Node* head){
	Node* last = head;
   while (last->next->next != head)last = last->next;
   last->next=head;
	return head;
}
Node* deleteindexof(Node* head,int n){
	if(size(head)==0){
		cout<<"error...";
		return head;
	}
	if(n==1)
		return deletestart(head);
	if(n-1==size(head))
		return deleteend(head);
	Node* xx=head;
	for(int i=0;i<n-2;i++)head=head->next;
	head->next=head->next->next;
	return xx;
}
