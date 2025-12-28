#include<stdio.h>
void reverseArray(int *a,int len){
  printf("\nthe vaule of a is %X",a);
  int *p = a+len-1;
  printf("\nthe value of p is %X",p);
  printf("\nthe array elements in reverse order are\n");
while(p>=a)
{

  printf("\nvalue at address 0x%X is: %d",p,*p);
    p--;
}
}
int main(){
  int a[5] = {1,2,3,4,5};
  int *p = a;
  printf("base address of array: 0x%X",p+4);
  int len = sizeof(a)/sizeof(typeof(a[0]));
  int i = len;
  while(i>0)
  {
    printf("\nvalue at address 0x%X is: %d",p,*p);
    p++;
    i--;
  }
  reverseArray(a,len);
}