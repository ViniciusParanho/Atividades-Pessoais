#include <stdio.h>
int fatorialrecursivo(int n){
  if (n==0||n==1){
    return 1;
  }
  else
    return n*fatorialrecursivo(n-1);
}
