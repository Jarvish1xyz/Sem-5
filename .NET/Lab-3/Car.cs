using System;

namespace Lab_3
{
    internal class Car
    {
        string Make;
        string Model;
        int Year;
        string FuelType;
        string Horsepower;

        public Car(string make, string model, int year, string fuleType, string horsepower)
        {
            this.Make = make;
            this.Model = model;
            this.Year = year;
            this.FuelType = fuleType;
            this.Horsepower = horsepower;
        }

        public void DisplyCarDetail()
        {
            Console.WriteLine($"Make : {Make}");
            Console.WriteLine($"Model : {Model}");
            Console.WriteLine($"Year : {Year}");
            Console.WriteLine($"FuelType : {FuelType}");
            Console.WriteLine($"Horsepower : {Horsepower}");
            Console.WriteLine();
        }
    }
}
