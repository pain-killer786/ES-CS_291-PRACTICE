/*Write a program to read two different matrix from user and
i) Show the product of two matrices.
ii) Show the sum of two matrices.     (Use Switch Case)*/

#include<stdio.h>
int main()
{
    int x,a[100][100], b[100][100],c[100][100],i,j,m,n,f,p,k;
    printf("\n Enter your choice    1: Product of two matrices \n 2: Sum of two matrices");
    scanf("%d", &x);
    switch (x)
    {
        case 1:
        printf("\n Enter the number of rows and columns of first matrix:");
        scanf("%d %d",&m,&n);
        printf("\n Enter the number of rows and columns of second matrix:");
        scanf("%d %d",&p,&f);
        if(n!=p)
        {
            printf("\n Matrix multiplication is not allowed");
        }
        else
        {
            printf("\n Enter %d rows and %d columns of first matrix in row wise:-",m,n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("\n Enter %d rows and %d columns of second matrix in row wise:-",p,f);
            for(i=0;i<p;i++)
            {
                for(j=0;j<f;j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<f;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<p;k++)
                    {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    }
                }
            }
            printf("\n The resultant matrix is:-");
            for(i=0;i<m;i++)
            {
                printf("\n");
                for(j=0;j<f;j++)
                {
                    printf("%d ", c[i][j]);
                }
            }
        }
        break;

        case 2:
        printf("\n Enter the number of rows and columns:");
        scanf("%d %d",&m,&n);
        printf("\n Enter the elements for %d rows and %d columns of first matrix:-",m,n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n Enter the elements for %d rows and %d columns of the second matrix:-",m,n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
               scanf("%d",&a[i][j]); 
            }
        }
        printf("\n The resultant matrix is:");
        for(i=0;i<m;i++)
        {
            printf("\n");
            for(j=0;j<n;j++)
            {
                printf("%d",a[i][j]+b[i][j]);
            }
        }
        break;

        default:
        printf("\n Wrong Choice:-");
    }
    printf("\n Done");
    return 0;
}