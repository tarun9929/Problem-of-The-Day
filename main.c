/*
  Convert Dacimal to Binary
*/

#include <stdio.h>

int main(void) {
  int n;
  int ans = 0;
  int i = 1;

  printf("Enter a number\n");
  scanf("%d" , &n);

  while(n){
    ans = ans + (n % 2 * i);
    i = i * 10;
    n = n / 2;
  }

  printf("%d" , ans);
  
  return 0;
}