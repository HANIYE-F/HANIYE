#include<iostream>
#include<string>
using namespace std;

class array {
public:
    int find(int a[], int n, int key) {
        for (int i = 0; i < n; i++) {
            if (a[i]==key) {
                return i;
            }
        }
        return -1;
    }
