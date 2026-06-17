using System;
using System.Xml.Linq;

namespace Lab_3
{
    internal class Employee
    {
        int Emp_ID;
        string Name;
        string Department;
        string Designation;
        double Salary;

        public void GetEmpDetail()
        {
            Console.Write("Enter Faculty ID : ");
            Emp_ID = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Faculty Name : ");
            Name = Console.ReadLine();

            Console.Write("Enter Faculty Department : ");
            Department = Console.ReadLine();

            Console.Write("Enter Faculty Designation : ");
            Designation = Console.ReadLine();

            Console.Write("Enter Faculty Salary : ");
            Salary = Convert.ToDouble(Console.ReadLine());
        }

        public void DisplayEmpDetails()
        {
            Console.WriteLine("Detail of Faculty ");
            Console.WriteLine($"ID : {Emp_ID}");
            Console.WriteLine($"Name : {Name}");
            Console.WriteLine($"Department : {Department}");
            Console.WriteLine($"Designation : {Designation}");
            Console.WriteLine($"Salary : {Salary}");
            Console.WriteLine();
        }
    }
}
