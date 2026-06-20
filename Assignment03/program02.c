#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}