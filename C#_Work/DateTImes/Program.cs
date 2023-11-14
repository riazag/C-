namespace DateTImes
{
    internal class Program
    {
        static void Main(string[] args)
        {
            DateTime myValue = DateTime.Now;
              // Console.WriteLine(myValue.ToString());
              //Console.WriteLine(myValue.ToShortDateString());
             //Console.WriteLine(myValue.ToShortTimeString());
            // Console.WriteLine(myValue.ToLongTimeString());
            //  Console.WriteLine(myValue.ToLongDateString());
           //   Console.WriteLine(myValue.AddDays(3).ToLongDateString());
           // Console.WriteLine(myValue.AddHours(3).ToLongTimeString());
          // Console.WriteLine(myValue.AddHours(-3).ToLongTimeString());
         // Console.WriteLine(myValue.Month);
         // DateTime myBirthday = new DateTime(2002,09,20);
         DateTime Birthday = DateTime.Parse("2002,09,20"); 
            Console.WriteLine(Birthday.ToLongDateString());
            Console.ReadLine();
        }
    }
}    