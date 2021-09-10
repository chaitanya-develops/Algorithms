// work on this on friday

#include<bits/stdc++.h>
using namespace std;

// Buy stocks at ith day and sell at jth day but you should not sell with in L days of buying.
int main(){
  int n = 10;
  // cout<<"Enter number of elements in an array: ";
  // cin>>n;
  // int a[n];
  //
  // for (int i=0;i<n;++i){
  //   a[i] = rand()%1000000;

  int a[n] = {9,3,5,2,5,6,6,3,1,2};
  int l = 3;
  int imax = 0;
  int jmax = l;
  int Max = 0;
  int i = 0;
  for (int j = l;j<n;j++){
    if (a[j-l]<a[i]){
      i = j-l;
    }
    if (a[j] - a[i] > Max){
      Max = a[j] - a[i];
      imax = i;
      jmax = j;
    }
  }
  cout<<"maximum is "<<Max<<" buy at "<<imax<<" sell at "<<jmax;

}
