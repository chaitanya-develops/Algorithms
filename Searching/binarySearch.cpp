#include<bits/stdc++.h>
using namespace std;

int binarySearch(int x,int start,int end,int arr[]){
  if (end>=start){
    int mid = end + start;
    mid = mid / 2;

    if (x == arr[mid]){
      return mid;
    }
    else if (x>arr[mid]){
      return binarySearch(x,mid+1,end,arr);
    }
    else if (x<arr[mid]){
      return binarySearch(x,start,mid-1,arr);
    }
  }
  return -1;
}



int main(){
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};
  int arrlen = 10;
  int index = binarySearch(-2,0,arrlen-1,arr);
  cout<<"index is "<<index;

}
