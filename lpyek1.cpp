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
