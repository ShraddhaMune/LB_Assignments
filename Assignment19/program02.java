class Logic
{
    void displayGrade(int marks)
    {
        if(marks >= 75)
        {
            System.out.println("Distinction");
        }
        else if(marks >= 60)
        {
            System.out.println("First Class");
        }
        else if(marks >= 50)
        {
            System.out.println("Second Class");
        }
        else if(marks >= 35)
        {
            System.out.println("Pass");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class program02
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}