using System;

namespace Lab_4;

public abstract class Billing
{
    string Name;
    int Age;

    public Billing(string name, int age)
    {
        this.Name = name;
        this.Age=age;
    }
    public abstract int CalculateBill(int charge);

}

public class InPatientBilling : Billing
{
    int AdmitFees;
    public InPatientBilling(string name, int age, int admitFees) : base(name, age)
    {
        this.AdmitFees = admitFees;
    }
    public override int CalculateBill(int charge)
    {
        return charge + AdmitFees;
    }

}

public class OutPatientBilling : Billing
{
    int DischargeFees;

    public OutPatientBilling(string name, int age, int dischargeFees): base (name, age)
    {
        this.DischargeFees = dischargeFees;
    }
    public override int CalculateBill(int charge)
    {
        return charge + DischargeFees;
    }
}
