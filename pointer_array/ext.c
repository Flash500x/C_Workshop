#include<stdio.h>
void counter( char *ch){
  char *p;
  p = ch;
  char ch2 = 's';//character to be checked
  int c= 0;//counter variable
  while(*p!='\0')
  {
    if(*p==ch2)
    {
      c++;
    }
    p++;
  }
    printf("the frequence of the character %d is :%d",ch2,c);

 }
int main(){
 char ch[] = "She sells sea shells in the sea shore";
 char *p ;
 printf("%p\n",p=ch);
 for(p=ch;*p!='\0';p++)
 {
  printf("%p\n",p);
  printf("%c\n",*p);
 }
 counter(ch);

  return 0;
}
