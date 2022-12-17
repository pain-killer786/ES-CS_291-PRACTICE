//Write a program to check whether a string is palindrome or not.

#include<stdio.h>
#define max 100
#include<string.h>
int main()
{
    char a[max],b[max];
    printf("\n Enter a string:-");
    gets (a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("\n The string is palindrome.");
    }
    else
    {
        printf("\n The string is not palindrome.");
    }
    return 0;
}