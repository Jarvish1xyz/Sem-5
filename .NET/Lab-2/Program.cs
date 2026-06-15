namespace Lab_2
{
    internal class Program
    {
        //static void Main(string[] args)
        //{
        //    Console.Write("Enter the character: ");
        //    char ch = Console.ReadKey().KeyChar;
        //    Console.WriteLine();

        //    if(char.IsUpper(ch)) {
        //        Console.WriteLine("Lowercase: " + char.ToLower(ch));
        //    }
        //    else if (char.IsLower(ch))
        //    {
        //        Console.WriteLine("Uppercase: " + char.ToUpper(ch));
        //    }
        //    else
        //    {
        //        Console.WriteLine("Not a valid character!!!");
        //    }
        //}

        //static void Main(string[] args)
        //{
        //    Console.Write("Enter String: ");
        //    string str = Console.ReadLine()+'\0';
        //    Console.WriteLine();

        //    string result = "";

        //    foreach (char ch in str)
        //    {
        //        if (char.IsUpper(ch))
        //        {
        //            result+=char.ToLower(ch);
        //        }
        //        else if (char.IsLower(ch))
        //        {
        //            result+=char.ToUpper(ch);
        //        }
        //        else
        //        {
        //            result += ch;
        //        }
        //    }

        //    Console.WriteLine(result);
        //}


        //static void Main(string[] args)
        //{
        //    Console.Write("Enter String-1: ");
        //    string str1 = Console.ReadLine();
        //    Console.Write("Enter String-2: ");
        //    string str2 = Console.ReadLine();
        //    Console.WriteLine();

        //    if (str1.Contains(str2))
        //    {
        //        Console.WriteLine($"{str2} is substring of {str1}");
        //    }
        //    else
        //    {
        //        Console.WriteLine($"{str2} is not substring of {str1}");
        //    }

        //}


        //static void Main(string[] args)
        //{
        //    Console.Write("Enter n: ");
        //    int n = int.Parse(Console.ReadLine());

        //    int[] arr = new int[n];
        //    int max = int.MinValue;
        //    int secondMax = int.MinValue;

        //    for (int i=0;i < n; i++)
        //    {
        //        arr[i] = int.Parse(Console.ReadLine());
        //    }

        //    for(int i=0; i<n; i++)
        //    {
        //        if (arr[i]>max)
        //        {
        //            max = arr[i];
        //        }
        //        else if (arr[i]>secondMax && arr[i]<max)
        //        {
        //            secondMax = arr[i];
        //        }
        //    }

        //    Console.WriteLine($"Second Larest Element = {secondMax}");
        //}


        //static void Main(string[] args)
        //{
        //    Console.Write("Enter a: ");
        //    int a = int.Parse(Console.ReadLine());
        //    Console.Write("Enter b: ");
        //    int b = int.Parse(Console.ReadLine());

        //    Console.Write("Enter the oprator: ");
        //    char op = Console.ReadKey().KeyChar;

        //    Console.WriteLine();

        //    float ans=0;

        //    //if(op=='+')
        //    //{
        //    //    ans = a + b;
        //    //}
        //    //else if(op=='-')
        //    //{
        //    //    ans = a - b;
        //    //}
        //    //else if(op=='*')
        //    //{
        //    //    ans = a * b;
        //    //}
        //    //else if(op=='/')
        //    //{
        //    //    if(b==0)
        //    //    {
        //    //        Console.WriteLine("b can not be zero");
        //    //    }
        //    //    else
        //    //    {
        //    //        ans = a / b;
        //    //    }
        //    //}
        //    //else
        //    //{
        //    //    Console.WriteLine("Please enter valid oprator!!!");
        //    //}

        //    switch(op)
        //    {
        //        case '+':
        //            ans = a + b;
        //            break;
        //        case '-':
        //            ans = a - b;
        //            break;
        //        case '*':
        //            ans = a * b;
        //            break;
        //        case '/':
        //            if (b == 0)
        //            {
        //                Console.WriteLine("b can not be zero");
        //            }
        //            else
        //            {
        //                ans = a / b;
        //            }
        //            break;
        //        default:
        //            Console.WriteLine("Please enter valid oprator!!!");
        //            break;
        //    }


        //    Console.WriteLine($"{a} {op} {b} = {ans}");
        //}


        //static void Main(string[] args)
        //{
        //    Console.Write("Enter n: ");
        //    int n = int.Parse(Console.ReadLine());

        //    int[] arr = new int[n];
        //    int ans = 0;

        //    for (int i = 0; i < n; i++)
        //    {
        //        arr[i] = int.Parse(Console.ReadLine());
        //        ans += arr[i];
        //    }

        //    Console.WriteLine($"Sum of all element of array = {ans}");
        //}



        //static void Main(string[] args)
        //{
        //    Console.Write("Enter n: ");
        //    int n = int.Parse(Console.ReadLine());

        //    int[] arr = new int[n];
        //    int odd=0, even=0;

        //    for (int i = 0; i < n; i++)
        //    {
        //        arr[i] = int.Parse(Console.ReadLine());
        //        if (arr[i] % 2 == 0) even++;
        //        else odd++;
        //    }

        //    Console.WriteLine($"Count of Odd element= {odd}");
        //    Console.WriteLine($"Count of Odd element= {even}");
        //}



        //static void Main(string[] args)
        //{
        //    Console.Write("Enter String: ");
        //    string str = Console.ReadLine()+'\0';
        //    Console.Write("Enter the oprator: ");
        //    char c = Console.ReadKey().KeyChar;
        //    Console.WriteLine();

        //    string result = "";
        //    int first = 0, last=0;

        //    for(int i=0; str[i]!='\0'; i++)
        //    {
        //        if (str[i]==c)
        //        {
        //            if (first == 0) first=i;
        //            last = i;
        //        }
        //    }

        //    for (int i = 0; str[i] != '\0'; i++)
        //    {
        //        if(i==first || i==last)
        //        {
        //            result += 'D';
        //        }
        //        else
        //        {
        //            result += str[i];
        //        }
        //    }

        //    Console.WriteLine(result);
        //}



        static void Main(string[] args)
        {
            int c;
            while(true)
            {
                Console.WriteLine("1. Input Array\r\n2. Display Sum\r\n3. Count Odd and Even\r\n4. Find Second Largest\r\n5. Exit");
                Console.Write("Enter your option: ");
                c = int.Parse(Console.ReadLine());

                Console.WriteLine();
                int odd = 0, even = 0, sum = 0;
                int max = int.MinValue;
                int secondMax = int.MinValue;

                switch(c)
                {
                    case 1:
                        Console.Write("Enter n: ");
                        int n = int.Parse(Console.ReadLine());

                        int[] arr = new int[n];

                        for (int i = 0; i < n; i++)
                        {
                            arr[i] = int.Parse(Console.ReadLine());

                            sum += arr[i];

                            if (arr[i] % 2 == 0) even++;
                            else odd++;

                            if (arr[i]>max)
                            {
                                secondMax = max;
                                max = arr[i];
                            }
                        }
                        break;
                    case 2:
                            Console.WriteLine($"Sum of all element of array = {sum}");
                            Console.WriteLine();
                        break;
                    case 3:
                            Console.WriteLine($"Count of Odd element= {odd}");
                            Console.WriteLine($"Count of Odd element= {even}");
                            Console.WriteLine();
                        break;
                    case 4:
                            Console.WriteLine($"Second Larest Element = {secondMax}");
                            Console.WriteLine();
                        break;
                    case 5:
                            return;
                        break;
                }
            }
        }
    }
}
