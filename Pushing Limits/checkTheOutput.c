#include<stdio.h>

void main(){
  int i,j,k,n,a[1000000];
  n = 100;
  for (i=0;i<n;++i){
    for (j=0;j<n;++j){
      for (k=0;k<n;++k){
        a[i*n*n+j*n+k] = 2*i*j*k+1;
      }
    }
  }
  for (i=0;i<10000000;++i){
    printf("%d",a[i]);
  }
}
