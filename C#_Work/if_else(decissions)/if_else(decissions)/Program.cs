using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace if_else_decissions_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /* Console.WriteLine("winnnig chance:");
             Console.ReadLine();
             Console.Write("Enter any value: ");
             string userValue=Console.ReadLine();
             if(userValue=="1")
             { string message = "you won a car";
             Console.WriteLine(message);
             }
             else if(userValue=="2") 
             {
                 string message = " you won a bike";
                 Console.WriteLine(message);
             }
             else if(userValue=="3")
             {
                 string message = " you won a boat!";
                 Console.WriteLine(message);
             }
             else
             {
                 Console.WriteLine("you have enter incorrect value!");

             }
             Console.ReadLine() ;*/

            Console.WriteLine("winnnig chance:");
            Console.ReadLine();
            Console.Write("Enter any value: ");
            string userValue = Console.ReadLine();
            string message = "";
            if (userValue == "1")
                message = "you won a car";
            else if (userValue == "2")
                message = " you won a bike";
            else if (userValue == "3")
                message = " you  won a boat!";
            else
            {
                Console.WriteLine("you have enter incorrect value!");
            }
            Console.WriteLine(message);
            Console.ReadLine();
            Console.WriteLine("**************************");
            Console.WriteLine("winnnig chance:");
            Console.ReadLine();
            Console.Write("Enter any value: ");
            string userValue2 = Console.ReadLine();
            string message2 = (userValue2=="1") ? "Honda":"Grandi";
            Console.WriteLine("you entered: {0}, therefore you won a {1}.",userValue2, message2);
            Console.ReadLine() ;
            
        }
    }
}
