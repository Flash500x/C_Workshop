#include<stdio.h>
int formula(int *a)
{
  for(int i=0;i<4;i++)
  {
    printf("%d\n",a[i]);
  }
}
char Display(char *a)
{
 while(*a)// conditon for true
 {
  printf("%c",*a);
  a++;
 }
}
int main(){
int a[] = {1,2,3,4};
int k = formula(&a);
char ch[] = "New Mouse City";
Display(ch);
return 0;
}