/*Write a program to calculate the series:- 1.3.5.7.9......*/

#include<stdio.h>
int main()
{
  int i,n;
  int mul=1;
  printf("\n Enter the value:-");
  scanf("%d",&n);
  for(i=1;i<=(2*n-1);i=i+2)
  {
    mul=mul*i;
  }
  printf("\n Multiplication Result: %d",mul);
  return 0;
}
