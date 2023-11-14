namespace SimpleClasses
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Doctor doctor = new Doctor();
            /* Console.WriteLine(doctor.Name = "Riaz");
             Console.ReadLine();
             Console.WriteLine(doctor.Age = 21);
             Console.ReadLine();
             Console.WriteLine(doctor.Salary = 200000);
             Console.ReadLine();
             Console.WriteLine(doctor.Experience = "3 years");
             Console.ReadLine();*/
            /* Console.WriteLine("{0}\n{1}\n{2}\n{3}",
                 doctor.Name = "Riaz", 
                 doctor.Age= 21,
                 doctor.Salary = 200000,
                  doctor.Experience = "3 years"
                  );
             Console.ReadLine();*/
            doctor.SetValue("Hassan", 24, 200000, "2 years");
            doctor.GetValue();
        }
       
    }
    class Doctor
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public int Salary { get; set; }
        public String Experience { get; set; }
        public
        void SetValue(string name,int age, int sal,string exp)
        {
             Name = name;
             Age = age;
             Salary = sal;
             Experience = exp;
        }
        public void GetValue()
        {
            Console.WriteLine("{0}\n{1}\n{2}\n{3}",Name,Age,Salary,Experience);
            Console.ReadLine();
        }

    }
}