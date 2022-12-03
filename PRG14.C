#include<stdio.h>
int main()
{
    int n,i,fact;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\n Factorial of %d is undefined",n);
    }
    fact=1;
    for(i=n;i>1;i--)
    {
        fact=fact*i;
    }
    printf("\n Factorial of %d is %d", n, fact);
    return 0;
}