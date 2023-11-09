#include<iostream>
using namespace std;
int power(int base, int exponent){

if (exponent == 0){
    return 1;
}

else if (exponent > 0){
         return base *power(base,exponent-1);
}
else{
    return 1.0/power(base,-exponent);
}
}
int main(){
    int result = power(2,8);

    cout<<result<<endl;

    return 0;
}
//bazgashti code
