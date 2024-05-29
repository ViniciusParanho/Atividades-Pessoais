#include <stdio.h>
int ispalindrome (int right,int left,char str[]){
  if (left>=right)
    return 1;
  if (str[left]!= str[right])
    return 0;

  return ispalindrome (right-1, left+1, str);
  
}
