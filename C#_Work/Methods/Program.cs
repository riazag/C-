namespace Methods
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("*******CALCULATOR************");
            Console.ReadLine();
            Calculator();
            Console.ReadLine();
        } 
       private static void Calculator()
        {
           
            Console.Write("Enter the First number: ");
            double num1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter any opertaor (+,_,*,/):");
            string operators = Console.ReadLine();
            Console.Write("Enter the second number: ");
            double num2 = Convert.ToInt32(Console.ReadLine());
            if (operators == "+") 
            { 
                double SUM = num1 + num2;
                Console.Write("SUM = " +SUM);
                Console.ReadLine();
            }
            else if (operators == "-") 
            { 
                double DIFFERENCE = num1 - num2;
                Console.Write("DIFFERENCE = " +DIFFERENCE);
                Console.ReadLine();
            } 
            else if (operators == "*") 
            { 
                double PRODUCT = num1 * num2;
                Console.Write("PRODUCT = " +PRODUCT);
                Console.ReadLine();
            }
            else if (operators == "/") 
            { 
                double DIVISION = num1 / num2;
                Console.Write("DIVISION = " +DIVISION);
                Console.ReadLine();
            }
            else
            {
                Console.Write("OOPS! You have entered incorrect operator.");
                Console.ReadLine();
            }
        }
    }
}