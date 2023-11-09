#include<iostream>
using namespace std;

void towerofHanoi(int n,char source,char auxiliary,char destination){

if(n == 1){

    cout<<"transfer disk one of"<< source <<"To"<<destination<<endl;

       return;
}
towerofHanoi(n-1,source,destination,auxiliary);
cout<<"Disk transfer"<<n<<"From"<<source<<"To"<<destination<<endl;
towerofHanoi(n-1,auxiliary,source,destination);
}

int main(){

int n=3;
towerofHanoi(n,'A','B','C');

return 0;

}
