namespace Lab_3
{
    internal class Program
    {
        //= = = = = A-1 = = = = =

        //static void Main(string[] args)
        //{

        //    faculty f = new faculty();
        //    f.GetFacuktyDetail();
        //    f.DisplayFacultyDetail();
        //}


        //= = = = = A-2 = = = = =

        //static void Main(string[] args)
        //{

        //    Employee[] E = new Employee[5];

        //    Console.WriteLine("Enter Details of Employees ");
        //    Console.WriteLine();

        //    for(int i=0; i<5; i++)
        //    {
        //        E[i] = new Employee();
        //        Console.WriteLine($"Enter Detail of Employee-{i + 1} : ");
        //        E[i].GetEmpDetail();
        //        Console.WriteLine();
        //    }

        //    Console.WriteLine("Details of Employees ");
        //    Console.WriteLine();

        //    for(int i=0; i<5; i++)
        //    {
        //        Console.WriteLine($"Detail of Employee-{i+1} : ");
        //        E[i].DisplayEmpDetails();
        //    }
        //}


        //= = = = = A-3 = = = = =

        //static void Main(string[] args)
        //{
        //    Cube c = new Cube(10);

        //    c.volume();
        //}


        //= = = = = A-4 = = = = =
        static void Main(string[] args)
        {
            Car c = new Car("abc", "xyz", 2010, "desil", "500hp");

            c.DisplyCarDetail();
        }
    }
}
