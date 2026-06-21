class Logic
{
    void checkPalindrome(int num)
    {
        int temp = num;
        int rev = 0;
        int digit = 0;

        while(num != 0)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        if(temp == rev)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not a Palindrome Number");
        }
    }
}

class program02
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}