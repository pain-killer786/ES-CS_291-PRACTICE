#include<stdio.h>
int main()
{
  float n,i,sum;
  printf("\n Enter the value of n:-");
  scanf("%f", &n)
    sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+1.0/i;
  }
  printf("\n The result is:- %f",Sum);
  return 0;
}
