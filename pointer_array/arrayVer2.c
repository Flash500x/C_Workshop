#include<stdio.h>
int main(){
  int a[5] = {1,2,3,4,5};
  int *p = a;
  int n = 0;
  printf("base address of array: %p",p);
  while(n<5)
  {
    printf("\nvalue at address 0x%X is: %d",p,*p);
    p++;
    n++;
  }
}