namespace Lab_5
{

    class WithdrawalAmountExceeds : Exception
    {
        public WithdrawalAmountExceeds(string message) : base(message) { }
    }

    class BankAccount
    {
        int AccountNumber;
        double Balance;

        public BankAccount(int AccountNumber, double Balance)
        {
            this.AccountNumber = AccountNumber;
            this.Balance = Balance;
        }

        public void Withdraw(double Amount)
        {

            if (Amount > Balance)
            {
                throw new WithdrawalAmountExceeds("There is not suffisiant balance in your account");
            }

            Console.WriteLine("Withdrawal successfull.");
            this.Balance -= Amount;
            Console.WriteLine($"Current Blance = {Balance}");
        }
    }
}