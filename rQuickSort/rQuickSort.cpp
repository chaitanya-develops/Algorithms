#include<bits/stdc++.h>
using namespace std;

// void swap(int* a,int* b){
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

int partition(int a[],int l,int r){
  int pivot = a[l];
  int i = l + 1;
  int j = r;

  while(i<=j){
    while(i<=j && a[i]<=pivot){
      i++;
    }
    while(i<=j && a[j]>pivot){
      j--;
    }
    if (i<j){
      int temp2 = a[i];
      a[i] = a[j];
      a[j] = temp2;
      // i++;
      // j--;
    }
  }
  i--;
  a[l] = a[i];
  a[i] = pivot;
  return i;
}

void rqSort(int a[],int l,int r){
  if (l<r){
    int p = rand()%(r-l+1) + l;
    int temp = a[l];
    a[l] = a[p];
    a[p] = temp;
    int k = partition(a,l,r);
    rqSort(a,l,k-1);
    rqSort(a,k+1,r);
  }
}

int main(){
  int arr[10] = {6,2,5,7,9,8,0,1,3,4};

  rqSort(arr,0,9);
  for (int i =0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}
