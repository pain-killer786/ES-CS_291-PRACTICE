/*Write a program to take n integer from user and show the largest and smallest integer with their corresponding indices [Use Array]*/

#include<stdio.h>
#define max 100
int main()
{
    int a[max],n,i,g,h,l,k;
    printf("\n Enter the number of elements of the array:-");
    scanf("%d",&n);
    printf("\n Enter the elements of the array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    g=a[0];
    h=a[0];
    k=0;
    l=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>g)
        {
            g=a[i];
            k=i;
        }
        if(a[i]<h)
        {
            h=a[i];
            l=i;
        }
    }
    printf("\n The greatest value and smallest value with their corresponding indice is %d:-%d, %d:-%d",g,k,h,l);
    return 0;
}