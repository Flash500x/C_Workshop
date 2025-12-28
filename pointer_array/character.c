#include<stdio.h>
int main(){
// character pointer array
  char *sports[5];
  sports[0] = "soccer";
  sports[1] = "basketball";
  sports[2] = "tennis";
  sports[3] = "volleyball";
  sports[4] = "cricket";
 for(int i=0;i<5;i++)
{
  printf("the value of sports[%d] is: %s at memory location %p\n",i,sports[i],sports[i]);
}
}