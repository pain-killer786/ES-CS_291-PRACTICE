//Write the output of the following program i.e, to copy a structure to another structure.

#include<stdio.h>
#include<string.h>
struct record
{
    int id;
    char name[20];
    int marks;
};
int main()
{
    struct record a,b;
    printf("\n Enter id:-");
    scanf("%d",&a.id);
    fflush(stdin);
    printf("\n Enter name:-");
    gets(a.name);
    printf("\n Enter marks:-");
    scanf("%d",&a.marks);
    b.id=a.id;
    strcpy(b.name,a.name);
    b.marks=a.marks;
    printf("\n Copied record is %d %s %d", b.id, b.name, b.marks);
    return 0;
}