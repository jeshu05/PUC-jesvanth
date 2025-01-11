#include <stdio.h>
int main() 
{
  char name;
  int m1,m2,m3;
  int average;
  scanf("%c",&name);
  scanf("%d %d %d",&m1,&m2,&m3);
  average=(m1+m2+m3)/3;
  printf("%c\n",name);
  printf("%d\n",average);
  return 0;
}
