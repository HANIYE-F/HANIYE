#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T value) : data(value), next(NULL) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;

public:
    LinkedList() : head(NULL), size(0) {}
 // ... (بقیه توابع به عنوان پیشنهاد شده)

    // Concatenate with another linked list
    void Concatenate(const LinkedList<T>& otherList) {
        Node<T>* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        Node<T>* otherCurrent = otherList.head;
        while (otherCurrent != NULL) {
            InsertAtEnd(otherCurrent->data);
            otherCurrent = otherCurrent->next;
        }
    }
