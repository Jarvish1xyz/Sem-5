using System;

namespace Lab_3
{
    internal class Cube
    {
        double side;
        public Cube(double side)
        {
            this.side = side;
        }

        public void volume()
        {
            Console.WriteLine($"Length of Cube : {side}");
            Console.WriteLine();
            Console.WriteLine($"Volume of Cube : {side*side*side}");
        }
    }
}
