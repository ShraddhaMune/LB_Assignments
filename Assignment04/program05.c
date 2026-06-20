#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 1;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum = iNonFactSum + i;
        }
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference = %d",iRet);

    return 0;
}