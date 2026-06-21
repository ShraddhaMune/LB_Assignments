class Logic
{
    void calculatePower(int base, int exp)
    {
        int power = 1;

        for(int i = 1; i <= exp; i++)
        {
            power = power * base;
        }

        System.out.println("Power = " + power);
    }
}

class program05
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}