using System;
using System.Runtime.CompilerServices;


namespace Lab_4;

class MedicalEquipment
{
    string name;
    int BaseLineServiceFees;
    public MedicalEquipment(string name, int baselineservicefees)
    {
        this.name = name;
        this.BaseLineServiceFees = baselineservicefees;
    }
}

class DiagnosticScanner : MedicalEquipment
{
    int MaintenanceFees;
    public DiagnosticScanner(string name, int baselineservicefees, int maintenancefees): base(name, baselineservicefees)
    {
        this.MaintenanceFees = maintenancefees;
    }


}
