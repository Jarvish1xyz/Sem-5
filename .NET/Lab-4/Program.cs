    namespace Lab_4
{
    class Program
    {
        //static void Main(string[] args)
        //{
        //    Console.Write("Enter Doctor Name: ");
        //    string name = Console.ReadLine();

        //    Console.Write("Enter Basic Pay: ");
        //    double basicPay = Convert.ToDouble(Console.ReadLine());

        //    Console.Write("Enter Doctor Allowance: ");
        //    double allowance = Convert.ToDouble(Console.ReadLine());

        //    Docter d1 = new Docter(name, basicPay, allowance);
        //    d1.displayDetail();
        //}


        //static void Main(string[] args)
        //{
        //    Console.WriteLine("Enter Name: ");
        //    string name = Console.ReadLine();

        //    Console.WriteLine("Enter Age: ");
        //    int age = int.Parse(Console.ReadLine());

        //    Console.WriteLine("Enter Admit Fees");
        //    int admit = int.Parse(Console.ReadLine());

        //    Console.WriteLine("Enter Charge: ");
        //    int charge = int.Parse(Console.ReadLine());

        //    Console.WriteLine("Enter Discharge Fees");
        //    int discharge = int.Parse(Console.ReadLine());

        //    InPatientBilling ip = new InPatientBilling(name, age, admit);
        //    Console.WriteLine(ip.CalculateBill(charge));

        //    OutPatientBilling op = new OutPatientBilling(name, age, discharge);
        //    Console.WriteLine(op.CalculateBill(charge));

        //}


        static void Main(string[] args)
        {
            INotificationService email = new EmailNotification();
            INotificationService sms = new SMSNotification();

            email.display();
            sms.display();
        }
    }
}
