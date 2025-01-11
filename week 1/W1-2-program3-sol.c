#include<stdio.h>
int main() 
{
  char ch;
  scanf("%c",&ch);
  int a=(int)ch;
  printf("%d\n",a);
  char b=ch-1;
  char c=ch+1;
  printf("%c %c \n",b,c);
  return 0;
}
