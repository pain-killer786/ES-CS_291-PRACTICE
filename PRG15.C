/*Write a program to find sum of all digits of a given integer*/

#include<stdio.h>
int main()
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