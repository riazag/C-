using System.Text;

namespace workingWithString
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // How to print ("") within a string
            //string myString = "Player like \"Babar\" got out without scoring ";
            //how to go to new line within a string 
            //string myString = "Player like Babar\ngot out without scoring ";
            //how to print \ within the string
            //string myString = " Go to your c:\\drive";
            //string myString = @" Go to your c:\drive";
            //how to use replacement code
            //string myString = string.Format("{0} = {1}","first","Second");
            // how to write number in currency style
            // string myString = string.Format("{0:C}", 123.40);
            // how to write a number in definite number format style
            // string myString = string.Format("{0:N}", 12453.40);
            //how to write number in percentage style
            //how to write number in phone number style
            // string myString = string.Format("{0:(###) ###-####}",8757413);
            //how to print sub-string
            //string myString = " this is Riaz a SW Engineer";
            //myString = myString.Substring(6, 13);
            //myString = myString.Remove(6, 13);
           // myString = string.Format(" lenght before {0} --- lenght after {1}" 
           // ,myString.Length,myString.Trim().Length);
           /* for (int i = 0; i < 100; i++)
            {
                myString += "--" + i.ToString();
            }*/
           StringBuilder myString = new StringBuilder();   
           for (int i = 0; i < 100; i++)
            {
               myString.Append("--");   
                myString.Append(i);

            }
            Console.WriteLine(myString);
            Console.ReadLine();
        }
    }
}