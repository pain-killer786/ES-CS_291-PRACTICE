//Write the output of the following program.

#include<stdio.h> 
void fun(int,int *);
int main()
{
    int x,y;
    x=10;
    y=20;
    fun(x,&y);
    printf("\n %d %d",x,y);
}
void fun(int a, int *p)
{
    a=a+5;
    *p=*p+5;
}