#include<stdio.h>
int main(){
  int a[5] = {1,2,3,4,5};
  int *p = a; //a points to the base address of the array; hence & is not used to obtain the address of the array
  printf(" base address of array: 0x%X",p);
  printf("\n Display:\n");
  printf("first value of array is: %d\n",*p);
  p++; //to increment address
  printf("Current address of pointer: 0x%X\n",p);
  printf("second value of array is: %d\n",*p);
  p++;
  printf("Current address of pointer: 0x%X\n",p);
  printf("third value of array is: %d\n",*p);
  p++;
  printf("Current address of pointer: 0x%X\n",p);
  printf("fourth value of array is: %d\n",*p);
  p++;
  printf("Current address of pointer: 0x%X\n",p);
  printf("fifth value of array is: %d\n",*p);
;  return 0;
}
