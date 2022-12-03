#include<stdio.h>
int amin()
{
    int n,y,sum;
    printf("\n Enter the number:-");
    scanf("%d",&n);
    sum=0;
    y=n;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("\n Sum of digits of %d is %d",y,sum);
    return 0;
}