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
