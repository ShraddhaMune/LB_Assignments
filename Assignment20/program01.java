class Logic
{
    void sumEvenNumbers(int n)
    {
        int sum = 0;

        for(int i = 2; i <= n; i = i + 2)
        {
            sum = sum + i;
        }

        System.out.println("Sum = " + sum);
    }
}

class program01
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}