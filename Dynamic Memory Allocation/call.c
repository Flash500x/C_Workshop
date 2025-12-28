#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  int *p;
  p = (int*)calloc(n,sizeof(int));
  for(int i=0;i<n;i++)
  {
    p[i] = i+1;
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\n",p[i]);
  }
  free(p);
  return 0;
}