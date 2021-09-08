#include<bits/stdc++.h>
using namespace std;

 // find the absolute max of a[j] - a[i] where j>i

int main(){
   // int n;
   // cout<<"Enter the size of array: ";
   // cin>>n;
   // int a[n];
   // for (int i = 0;i<n;i++){
   //   a[i] = rand()%1000000;
   // }
  int n = 6;
  int a[n] = {4,2,3,4,1,7};

  int i = 0;
  int j;
  int max = 0;
  int imax = 0;
  int jmax = 0;
  for (j=1;j<n;j++){
    if (a[i]>a[j]){
      i = j;
    }
    else if (a[j]-a[i]>max){
      max = a[j] - a[i];
      jmax = j;
      imax = i;
    }

  }
  cout<<"The profit is "<< max;
  cout<<"bought at "<< imax;
  cout<<"sold at "<< jmax;
 }
