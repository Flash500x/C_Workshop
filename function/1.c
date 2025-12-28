#include<stdio.h>
int add(int *a,int *b)
{
  return *a+*b;
}
int main(){
  int a = 5;
  int b = 10;
  int c = add(&a,&b);
  printf("the sum is %d",c);
}