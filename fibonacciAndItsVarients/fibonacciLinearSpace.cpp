#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  long long int a = 0;
  long long int b = 1;
  long long int c;

  for (int i = 2;i<n+1;i++){
    c = b + a;
    a = b;
    b = c;
  }
  cout<<"fib("<<n<<") is "<<c;
}
