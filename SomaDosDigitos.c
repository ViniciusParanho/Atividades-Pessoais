#include <stdio.h>
int somadosdigitos (int n) {
  if (n==0){
    return 0;
    
  }
  else 
    return n%10 + somadosdigitos(n/10);
}
  
