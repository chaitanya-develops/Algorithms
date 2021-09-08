#include<bits/stdc++.h>
using namespace std;

// Find the max absolute in the array
int main(){
  // Generating a random array
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    a[i]=rand()%1000000;

  // step 1) find max and min

  int max = a[0];
  int min = a[0];

  for (int j=1;j<n;++j){
    if (a[j] > max){
      max = a[j];
    }
    if (a[j] < min){
      min = a[j];
    }
  }
  printf("%d",max - min);

}
