using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dmc
{
    internal class Program
    {
        static void Main(string[] args)
        {

            double CGPA, DLD_GPA, DE_GPA, DB_GPA, prob_GPA, DS_GPA;
            Console.Write("Enter the marks of DLD: ");
            int DLD = Convert.ToInt16(Console.ReadLine());
            if (DLD >= 85) 
            {
                DLD_GPA = 4.00;
            }
            else if(DLD>=78 && DLD <=85)
            {
                DLD_GPA = 3.5;
            }
            else if (DLD >= 71 && DLD <= 77)
            {
                DLD_GPA = 3.00;
            }
            else if (DLD >= 61 && DLD <= 70) 
            {
                DLD_GPA = 2.5;
            }
            else if (DLD >= 50 && DLD <= 60)
            {
                DLD_GPA = 2.00;
            }
            else
            {
                DLD_GPA = 0.00;
            }
            Console.Write("Enter the marks of DE: ");
            int DE = Convert.ToInt16(Console.ReadLine());
            if (DE>= 85)
            {
                DE_GPA = 4.00;
            }
            else if (DE>= 78 && DE <= 85)
            {
                DE_GPA = 3.5;
            }
            else if (DE >= 71 && DE<= 77)
            {
                DE_GPA = 3.00;
            }
            else if (DE >= 61 && DE<= 70)
            {
                DE_GPA = 2.5;
            }
            else if (DE >= 50 && DE<= 60)
            {
                DE_GPA = 2.00;
            }
            else
            {
                DE_GPA = 0.00;
            }
            Console.Write("Enter the marks of DB: ");
            int DB = Convert.ToInt16(Console.ReadLine());
            if (DB >= 85)
            {
                DB_GPA = 4.00;
            }
            else if (DB >= 78 && DB <= 85)
            {
                DB_GPA = 3.5;
            }
            else if (DB >= 71 && DB <= 77)
            {
                DB_GPA = 3.00;
            }
            else if (DB >= 61 && DB <= 70)
            {
                DB_GPA = 2.5;
            }
            else if (DB >= 50 && DB <= 60)
            {
                DB_GPA = 2.00;
            }
            else
            {
                DB_GPA = 0.00;
            }
            Console.Write("Enter the marks of prob: ");
            int prob = Convert.ToInt16(Console.ReadLine());
            if (prob >= 85)
            {
                prob_GPA = 4.00;
            }
            else if (prob >= 78 && prob <= 85)
            {
                prob_GPA = 3.5;
            }
            else if (prob >= 71 && prob <= 77)
            {
                prob_GPA = 3.00;
            }
            else if (prob >= 61 && prob <= 70)
            {
                prob_GPA = 2.5;
            }
            else if (prob >= 50 && prob <= 60)
            {
                prob_GPA = 2.00;
            }
            else
            {
                prob_GPA = 0.00;
            }
            Console.Write("Enter the marks of Ds: ");
            int DS = Convert.ToInt16(Console.ReadLine());
            if (DS >= 85)
            {
                DS_GPA = 4.00;
            }
            else if (DS >= 78 && DS <= 85)
            {
                DS_GPA = 3.5;
            }
            else if (DS >= 71 && DS <= 77)
            {
                DS_GPA = 3.00;
            }
            else if (DS >= 61 && DS <= 70)
            {
                DS_GPA = 2.5;
            }
            else if (DS >= 50 && DS <= 60)
            {
                DS_GPA = 2.00;
            }
            else
            {
                DS_GPA = 0.00;
            }
            Console.WriteLine("***********************************");
            Console.ReadLine();
            Console.WriteLine("DLD Marks: "+DLD+", "+"GPA = "+DLD_GPA);
            Console.ReadLine();
            Console.WriteLine("DE Marks: "+DE+", "+"GPA = "+DE_GPA);
            Console.ReadLine();
            Console.WriteLine("DE Marks: "+DB+", "+"GPA = "+DB_GPA);
            Console.ReadLine();
            Console.WriteLine("DE Marks: "+prob+", "+"GPA = "+prob_GPA);
            Console.ReadLine();
            Console.WriteLine("DE Marks: "+DS+", "+"GPA = "+DS_GPA);
            Console.ReadLine();
            int TotalMarks = DLD + DB + DS + DE + prob;
            Console.WriteLine("TOTAL MARKS: "+TotalMarks);
            Console.ReadLine();
            double Percent = (double)TotalMarks / 5;
            Console.WriteLine("Percentage: " + Percent);
            Console.ReadLine();
            CGPA = (double)((3*DLD_GPA)+(2*DE_GPA)+(4*DB_GPA)+(4*DS_GPA)+(2*prob_GPA))/15;
            Console.WriteLine("CGPA = "+CGPA);
            Console.ReadLine();
            Console.Write("****************************************");
            Console.ReadLine();

        }
    }
}
