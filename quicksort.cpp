#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
  //choose the pivot

  int pivot=arr[high];
  //Index of smaller element and Indicate
  //the right position of pivot found so far
  int i=(low-1);

  for(int j=low;j<=high;j++)
  {
    //If current element is smaller than the pivot
    if(arr[j]<pivot)
    {
      //Increment index of smaller element
      i++;
      swap(arr[i],arr[j]);
    }
  }
