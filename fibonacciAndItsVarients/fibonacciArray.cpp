#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  long int a[n+1];
  a[0] = 0;
  a[1] = 1;

  for (int i =2;i<n+1;++i){
    a[i] = a[i-1] + a[i-2];
  }
  cout<<"fib("<<n<<") is "<<a[n];
}
