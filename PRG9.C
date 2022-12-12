#include<stdio.h>
int main()
{
  float n,i,sum=0;
  printf("\n Enter the value of n:-");
  scanf("%f", &n);
  for(i=1;i<=n;i++)
  {
    sum=sum+1.0/i;
  }
  printf("\n The result is:- %f",sum);
  return 0;
}
