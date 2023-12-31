#include <iostream>
using namespace std;

// ساختار گره درخت AVL
struct Node
{
    int data; // داده
    Node* left; // اشاره‌گر به گره چپ
    Node* right; // اشاره‌گر به گره راست
    int height; // ارتفاع گره
};

// تابع برای محاسبه ارتفاع گره
int getHeight(Node* node)
{
    if (node == nullptr)
        return 0;
    return node->height;
}
// تابع برای ایجاد گره جدید با داده مشخص شده بصورتی که اشاره گر ها به نال پیتیآر و ارتفاع گره برابر 1 باشد
Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->height = 1;
    return newNode;
}

// تابع برای انجام عملیات چرخش به راست
Node* rotateRight(Node* z)
{
    Node* y = z->left;
    Node* T3 = y->right;

    y->right = z;
    z->left = T3;

    z->height = 1 + max(getHeight(z->left), getHeight(z->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y;
}
