/*Write a program to print:-
  
   0
  000
 00000
0000000

*/

#include<stdio.h>
int main()
{
  int n,i,j,k=0;
  printf("\n Enter the values:");
  scanf("%d",&n);
  for(i=1;i<=n;i++,k=0)
  {
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    while(k!=2*i-1)
    {
      printf("0 ");
      k++;
    }
    printf("\n");
  }
  return 0;
}
