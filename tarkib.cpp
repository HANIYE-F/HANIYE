#include<iostream>
using namespace std;

int combination(int n,int k){

    if (k == 0|| k == n){
        return 1;
    }

    return combination(n - 1, k - 1) + combination(n-1,k);
}

int main(){

  int n=5;
  int k=2;

 int result = combination(n,k);
 cout<<"combination symbol="<<k<<"from="<<n<<"parts="<<result<<endl;
 return 0;
}
