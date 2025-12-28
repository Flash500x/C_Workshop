#include<stdio.h>
int main(){
  int a=5;// value inside a is 5
  int *p=&a;// p stores the address of a
  printf("value of a is: %d\n",a);
  printf("address of a is: 0x%X\n",&a);
  printf("value of p is: 0x%X\n",p);
  printf("value at address is: %d\n",*p);
  return 0;
}