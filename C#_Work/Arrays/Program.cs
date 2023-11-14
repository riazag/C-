namespace Arrays
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = new int[5];
            for (int i = 0; i < numbers.Length; i++)
            {
                Console.Write("Enter the " + i  + " element of array:");
                numbers[i] = Convert.ToInt32(Console.ReadLine());
            }

            Console.WriteLine("you have enter these Number: ");
           /* for (int j = 0; j < numbers.Length; j++)
            {
                Console.WriteLine(numbers[j]);
            }
            Console.ReadLine();*/

            // for and foreach have same function here!


           foreach (int number in numbers)
            {
                Console.WriteLine(number);
            }
            Console.WriteLine();

            // code to reverse a strring data 

            string zig = "Hi Riaz! i am munaza " +
                "your classmate.";
            char[] charArray= zig.ToCharArray();
            Array.Reverse(charArray);
            foreach (char zigchar in charArray)
            {
                Console.Write(zigchar);
            }
            Console.ReadLine();
        }
    }
}
 