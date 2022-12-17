//Write the output of the following program.

#include<stdio.h>
int main()
{
    int x,y,*p;
    x=10;
    y=20;
    p=&x;
    *p=*p+5;
    p=&y;
    *p=*p+3;
    printf("\n %d %d %d %d",x,y,*p,p);
    return 0;
}