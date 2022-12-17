//Write a program to read name and marks of n students and store them in a file. If the file previously exists, add the information to the file. 

#include<stdio.h>
int main()
{
    char name[50];
    int marks, i, num;
    printf("\n enter the number of students:");
    scanf("%d", &num);
    FILE *fptr;
    fptr =(fopen("F:\\student.txt", "a"));
    if(fptr== NULL)
    {
        printf("Error!");
    }
    for(i=0;i<num;++i)
    {
        printf("For student %d \n Enter name:", i+1);
        scanf("%s",name);
        printf("\n Enter marks:");
        scanf("%d", &marks);
        fprintf(fptr,"\n Name: %s \n Marks= %d \n", name,marks);
    }
    fclose(fptr);
    return 0;
}