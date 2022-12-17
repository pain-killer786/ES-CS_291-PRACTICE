// Write a program to find the solution of the equation ay+b+c=0

#include<stdio.h>
#include<string.h>
float solve_y(float a, float b, float c)
{
    float y;
    if(a==0)
    {
        printf("Value of Y cannot be predicted \n");
    }
    else
    {
        y=-(b+c)/a;
    }
    return y;
}
int main()
{
    float a,b,c,y;
    printf("\n Enter a linear equation in one variable of form ay+b+c=0");
    printf("\n Enter the value of a,b,c respectively");
    scanf("%f %f %f",&a,&b,&c);
    y=solve_y(a,b,c);
    printf("\n Solution is Y= %f", y);
}