using System;

namespace Lab_4;

public class Staff
{
    string name;
    double basicPay;

    public Staff(string name, double basicPay)
    {
        this.name = name;
        this.basicPay = basicPay;
    }

    public virtual double calculateSalary()
    {
        return basicPay;
    }

    public void displayDetails()
    {
        Console.WriteLine($"Name = {name}");
        Console.WriteLine($"BasicPay = {basicPay}");
    }
}

public class Docter : Staff
{
    double specialAllowance;

    public Docter(string name, double basicPay, double specialAllowance) : base(name, basicPay) 
    {
            this.specialAllowance = specialAllowance;
    }


    public override double calculateSalary()
    {
        return base.calculateSalary() + specialAllowance;
    }
    public void displayDetail()
    {
        base.displayDetails();
        Console.WriteLine($"SpecialAllowance = {specialAllowance}");
        Console.WriteLine($"Total Salary = {calculateSalary()}");
    }
}
