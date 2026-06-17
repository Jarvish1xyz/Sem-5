using System;

namespace Lab_3
{
    internal class faculty
    {
        int id;
        string name;
        int age;
        double weight;
        double height;

        public void GetFacuktyDetail()
        {
            Console.Write("Enter Faculty ID : ");
            id = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Faculty Name : ");
            name = Console.ReadLine();

            Console.Write("Enter Faculty Age : ");
            age = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter Faculty Weight : ");
            weight = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Faculty Height : ");
            height = Convert.ToDouble(Console.ReadLine());
        }

        public void DisplayFacultyDetail()
        {
            Console.WriteLine("Detail of Faculty ");
            Console.WriteLine($"ID : {id}");
            Console.WriteLine($"Name : {name}");
            Console.WriteLine($"Age : {age}");
            Console.WriteLine($"Weight : {weight}");
            Console.WriteLine($"Height : {height}");
            Console.WriteLine();
        }
    }
}