#include<stdio.h>

int MultFact(int iNo)
{
    int i = 1;
    int iMult = 1;

    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    iMult = iMult * iNo;

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors = %d",iRet);

    return 0;
}