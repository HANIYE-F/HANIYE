

#include <bits/stdc++.h>
using namespace std;

int main() {
  //initialize a string
  string s="geeksforgeeks";
 int arr[26]={0};

  //Storing the count
  for(int i=0;i<s.size();i++){
    arr[s[i]-'a']++;
  }

  //Search the count of the character
  char ch='e';

  // get count
  cout<<"The count of ch is "<<arr[ch-'a']<<endl;
  return 0;
}
