//Write the output of the following program.

#include<stdio.h>
int main()
{
    int x,y,*p,**q;
    x=10;
    y=20;
    p=&x;
    q=&p;
    **q=**q+7;
    p=&y;
    **q=**q-3;
    printf("\n %d %d %d",x,y,**q);
    return 0;
}