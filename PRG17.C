/*Write a program that takes a number from user and checks it's decimal part. If the decimal part is greater than or equal to 0.5, it takes the next integer to the output. If decimal part is less than 0.5, it shows the previous integer to the output*/

#include<stdio.h>
int main(void)
{
    float num;
    int tempCheck, roundNum, tempNum;
    printf("\n Enter the number:-");
    scanf("%f", &num);
    if (num>0)
    {
        tempNum=num*10;
        tempCheck=tempNum%10;
        if(tempCheck>=5)
        {
            roundNum=num;
            roundNum++;
        }
        else
        {
            roundNum=num;
        }
        printf("\n Whole Number after rounding off the given real number= %d", roundNum);
    }
    else if(num<0)
    {
        num=-(num);
        tempNum=num*10;
        tempCheck=tempNum%10;
        if(tempCheck>=5)
        {
            roundNum=num;
            roundNum--;
        }
        else
        {
            roundNum=num;
        }
        printf("\n Whole Number after rounding off the given real number= -%d", roundNum);
    }
    else
    {
        printf("\n The given number is 0");
    }
}