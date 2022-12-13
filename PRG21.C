/*Write a program to multiply two matrices using function*/

#include<stdio.h>
#define max 100
void prod(int[max][max],int[max][max],int,int,int,int);

/*Driver code*/

int main()
{
    int a[max][max],b[max][max],m,n,i,j,p,f;
    
    printf("\n Enter the number of rows and columns of first matrix:-");
    scanf("%d %d", &m,&n);
    printf("\n Enter the number of rows and columns of the second matrix:-");
    scanf("%d %d", &p,&f);
    
    
    printf("\n Enter the %d rows and %d columns elements in row wise:",m,n);
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    
    printf("\n Enter the %d rows and %d columns elements in row wise:",p,f);
    for(i=0;i<p;i++)
    {
        printf("\n");
        for(j=0;j<f;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    prod(a,b,m,n,p,f);
}


/*Function to add two matrices*/

void prod(int a[max][max],int b[max][max],int m, int n, int p, int f)
{
    int c[max][max],i,j,k;
    if(n!=p)
    {
        printf("\n Matrix Multiplication is not allowed");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=0;
                for(k=0;k<p;k++)
                {
                    c[i][j]+=a[i][j]+b[i][j];
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
}