using System;

namespace Whileiteration
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool displayMenu = true;
            while (displayMenu == true)
            {
               displayMenu = MainMenue();
              Console.ReadLine();
            }
        }
        private static bool MainMenue()
        {
            
            Console.WriteLine("Choose an option!");
            Console.WriteLine("1): Print Numbers");
            Console.WriteLine("2): Quess Qame");
            Console.WriteLine("3): Exit");
            string option = Console.ReadLine();
            if (option=="1")
            {
                printNumbers();
                return true; 
            } 
            else if (option == "2")
            {
                guessQame();
                return true;         
            } 
            else if (option == "3")
            {
                return false;
            } 
            else
            {
                return true;
            }
        }
        private static void printNumbers() 
        {
            Console.Clear();
            Console.WriteLine("Print NUMBERS!");
            Console.Write("Type a number: ");
            int  NUM = int.Parse(Console.ReadLine());
            //int counter = 1;
            int i = 1;
            while (i <= NUM) 
            {
                Console.Write(i);
                Console.Write(" ");
                i++;    
                //counter++;
            }
            Console.ReadLine();
        }
        private static void guessQame() 
        {
            Console.Clear();
            Console.WriteLine(" Choosing Game!");

            Random random = new Random();   
            int randomNumber = random.Next(1,20);

            int guesses = 0;
            bool incorrect = true;
            do
            {
                Console.WriteLine(" Quess a Number from 1 to 20 ");
                String Guess = Console.ReadLine();
                guesses++;
                if (Guess == randomNumber.ToString())
                    incorrect =  false;
                else
                    Console.WriteLine("Wrong!");
            } while (incorrect);
            Console.WriteLine("WoW! you are correct , It takes you {0}",guesses);

            Console.ReadLine();
        }
    }
}