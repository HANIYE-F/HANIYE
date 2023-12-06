// C++ program to illustrate creation
// and traversal of Circular LL

#include <bits/stdc++.h>
using namespace std;

// Structure for a node
class Node {
public:
	int data;
	Node* next;
};

// Function to insert a node at the
// beginning of Circular LL
void push(Node** head_ref, int data)
{
	Node* ptr1 = new Node();
	Node* temp = *head_ref;
	ptr1->data = data;
	ptr1->next = *head_ref;

	// If linked list is not NULL then
	// set the next of last node
	if (*head_ref != NULL) {
		while (temp->next != *head_ref) {
			temp = temp->next;
		}
		temp->next = ptr1;
	}

	// For the first node
	else
		ptr1->next = ptr1;

	*head_ref = ptr1;
}

// Function to print nodes in the
// Circular Linked List
void printList(Node* head)
{
	Node* temp = head;
	if (head != NULL) {
		do {

			// Print the data
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != head);
	}
}

// Driver Code
int main()
{
	// Initialize list as empty
	Node* head = NULL;

	// Created linked list will
	// be 11->2->56->12
	push(&head, 12);
	push(&head, 56);
	push(&head, 2);
	push(&head, 11);

	cout << "Contents of Circular"
		<< " Linked List\n ";

	// Function call
	printList(head);

	return 0;
}
