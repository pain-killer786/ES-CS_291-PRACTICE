//Write a program to copy a string to another without using library function.

#include<stdio.h>
int main()
{
    char a[100],b[100];
    int x;
    printf("\n Enter any String:");
    gets(a);
    for(x=0;a[x]!='\0';x++)
    {
        b[x]=a[x];
    }
    b[x]='\0';
    printf("\n String copied: %s",b);
    return 0;
}