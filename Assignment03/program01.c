#include<stdio.h>

void PrintEven(int iNo)
{
    int i;

    if(iNo <= 0)
    {
        return;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
}

int main()
{
    int iValue;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}