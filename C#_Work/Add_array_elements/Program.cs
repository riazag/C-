namespace Add_array_elements
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] Num = new int[5];
            int SUM = 0;
            Num[0] = 1;
            Num[1] = 2;
            Num[2] = 3;
            Num[3] = 4;
            Num[4] = 5;
            for (int i = 0; i < 5; i++)
            {
              SUM = SUM + Num[i];
            }
            Console.Write("Sum = ");
            Console.WriteLine(SUM);
            SUM = Convert.ToInt32(Console.ReadLine());
        }
    }
}