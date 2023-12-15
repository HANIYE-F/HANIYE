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
