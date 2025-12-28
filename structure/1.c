#include<stdio.h>
#include <string.h>
struct student{
    int roll_no;
    char name[20];
    float marks;
}s1;
int main(){
   struct student *p;
   p = &s1;
   p->roll_no = 1;
   strcpy(p->name,"Josh");//"Josh lies in the memory location of name, the string function strcpy is used to copy the string from that location to the new location of p"
   p->marks = 90.5;
   printf("roll no: %d\n",p->roll_no);
   printf("name: %s\n",p->name);
   printf("marks: %f\n",p->marks);
  printf("size of structure is %d",sizeof(s1));
    return 0;
}
