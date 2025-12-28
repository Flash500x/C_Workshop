#include<stdio.h>
int main(){
  int a = 5;
  int *p = &a;
  printf("address of a is: 0x%X\n",p);
  p++;
  printf("incremented address is: 0x%X\n",p);
  printf("size of integer: %d",sizeof(int));
  printf("\nsize of pointer: %d",sizeof(p));
  int *k = p-1;
  printf("\naddress of p-3 is: 0x%X",k);
return 0;
}