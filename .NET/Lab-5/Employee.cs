namespace Lab_5
{
    class InvalidSalaryException : Exception
    {
        public InvalidSalaryException(string message) : base(message) { }
    }

    class Employee
    {
        int EmpId;
        string Name;

        public Employee(int empId, string name)
        {
            this.EmpId = empId;
            this.Name = name;
        }

        public void Display()
        {
            Console.WriteLine($"EmpId = {EmpId}");
            Console.WriteLine($"Name = {Name}");
        }
    }

    class Manager : Employee
    {
        int Salary;

        public Manager(int empId, string name, int salary) : base(empId, name)
        {
            if (salary < 0)
            {
                throw new InvalidSalaryException("You entered Invalid Salary.");
            }
            this.Salary = salary;
        }

        public void Display()
        {
            base.Display();
            Console.WriteLine($"Salalry = {Salary}");
        }
    }
}