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

  int insert(int a[],int add,int n,int c)
    {
      if(n>=c)
      {
        return n;
    }
    a[n]=add;

    return(n+1);
  }
