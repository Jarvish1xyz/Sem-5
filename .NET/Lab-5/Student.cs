namespace Lab_5
{
    class InvalidMarkException : Exception
    {
        public InvalidMarkException(string message) : base(message) { }

    }
    class Student
    {
        int Id;
        string Name;
        int Mark;

        public Student(int id, string name, int mark)
        {
            this.Id = id;
            this.Name = name;
            if (mark < 0 || mark > 100)
            {
                throw new InvalidMarkException("You entered Invalid Marks");
            }
            this.Mark = mark;
        }

        public void Display()
        {
            Console.WriteLine($"Id = {Id}");
            Console.WriteLine($"Name = {Name}");
            Console.WriteLine($"Mark = {Mark}");

        }
    }
}