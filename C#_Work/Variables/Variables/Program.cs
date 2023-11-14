using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Variables
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x=3;
            int y;
            y = x + 5;
            Console.WriteLine("your vaule:",y);
            Console.ReadLine();
            Console.WriteLine("*************************************");
            Console.ReadLine();
            Console.Write("Enter your fist_name : ");
            String myFirstName=Console.ReadLine();
            Console.Write("Enter your Last_name : ");
            String myLastName=Console.ReadLine();
            Console.WriteLine("hello "+myFirstName+" "+myLastName);
            Console.ReadLine();


        }
    }
}
