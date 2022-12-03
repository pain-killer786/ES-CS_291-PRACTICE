#include<stdio.h>
int main()
{
    int n,a,b,as,r,i,t,p=1,q;
    float ac,s=0.0;
    printf("\n Enter 1 for rea of the square \n Enter 2 for Area of Circle \n Enter 3 for Calclulation of Series 1+1/2+1/3+1/4+....+1/n \n Enter 4 for the calculation of product of 1.3.5.7.9....(2n+1)");
    printf("\n Enter choice");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        printf("\n Enter the side of the square:");
        scanf("%d", &a);
        as=a*a;
        printf("\n Area of the square with side %d is:- %d", a,as);
        break;
        
        case 2:
        printf("\n Enter the radius of the circle:");
        scanf("%d",&r);
        ac=(22.0/7.0)*r*r;
        printf("\n Area of the Circle with radius %d is: %f", r,ac);
        break;
        
        case 3:
        printf("\n Enter the Value of b:-");
        scanf("%d", &b);
        for(i=1;i<=b;i++)
        {
            s=s+(1.0/i);
        }
        printf("\n Total sum of the series is:- %f", s);
        break;
        
        case 4:
        printf("\n Enter the values of n:");
        scanf("%d",&t);
        for(q=1;q<=(2*n+1);q=q+2)
        {
            p=p*q;
        }
        printf("\n Total product of the series is: %d",p);
        break;

        default:
        printf("\n Wrong input.");
    }
    printf("\n Done");
    return 0;
}