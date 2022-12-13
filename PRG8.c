/*Write down the output of the sample program*/

#include<stdio.h>
int main()
{
  int x,y,z;
  x=10;
  y=20;
  z=x+2;
  y=z+2;
  z=x+2;
  x=x+y+z;
  printf("\n %d %d %d",x,y,z);
  return 0;
}
