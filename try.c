#include <stdio.h>
int main() {
   int a = 5;
    int *p = &a;
   printf(" address of a is: 0X%X \n",p);


// pointer arithmetic
printf("incremented vlaue: 0X%X",p+1);
printf("\nsize of integer: %d",sizeof(int));
return 0;
}
