namespace Add_Two_Arrays
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr1 = new int[5];
            int[] arr2 = new int[5];
            Console.WriteLine("********************************************");
            Console.WriteLine("Enter the elements of first array");
            for (int i = 0; i < 5; i++)
            {
                Console.Write("Enter the " + i + " element of arr1: ");
                arr1[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write("Elements of first array: ");
            foreach (int num in arr1)
            {
                Console.Write(num);
                Console.Write("  ");
            }
                Console.ReadLine();
            Console.WriteLine("*********************************************");
            Console.WriteLine("Enter the elements of Second array");
            for (int i = 0; i < 5; i++)
            {
                Console.Write("Enter the " + i + " element of arr2: ");
                arr2[i] = Convert.ToInt32(Console.ReadLine());
            }
            Console.Write("Elements of Second array: ");
            foreach (int num in arr2)
            {
                Console.Write(num);
                Console.Write("  ");
            }
                Console.ReadLine();
            Console.WriteLine("*********************************************");
           Console.WriteLine("Addition of TWO arrays ");
           Console.Write("Element of resultant array: ");
                for (int j = 0; j < 5; j++)
                {
                    Console.Write(arr1[j] + arr2[j]);
                    Console.Write("  ");
                }
                Console.ReadLine() ;
            Console.WriteLine("*********************************************");


        }
    }
}