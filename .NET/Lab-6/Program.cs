

namespace Lab_6
{
    internal class Program
    {

        //= = = = = A-1 = = = = =


        //static List<Student> students = new List<Student>();
        //static void Main(string[] args)
        //{
        //    int choice;
        //    while (true)
        //    {
        //        Console.WriteLine("\n1. Add Student");
        //        Console.WriteLine("2. Display Students");
        //        Console.WriteLine("3. Search Student");
        //        Console.WriteLine("4. Update Student");
        //        Console.WriteLine("5. Delete Student");
        //        Console.WriteLine("6. Exit");
        //        Console.Write("Enter your choice: ");
        //        choice = int.Parse(Console.ReadLine());
        //        Console.WriteLine();

        //        switch (choice)
        //        {
        //            case 1:
        //                AddStudent();
        //                break;
        //            case 2:
        //                DisplayStudents();
        //                break;
        //            case 3:
        //                SearchStudent();
        //                break;
        //            case 4:
        //                UpdateStudent();
        //                break;
        //            case 5:
        //                DeleteStudent();
        //                break;
        //            case 6:
        //                Console.WriteLine("Exiting...");
        //                return;
        //            default:
        //                Console.WriteLine("Invalid choice. Please try again.");
        //                break;
        //        }
        //    }
        //}

        //static void AddStudent()
        //{
        //    Console.Write("Enter Id : ");
        //    int id = int.Parse(Console.ReadLine());
        //    Console.Write("Enter Name : ");
        //    string name = Console.ReadLine();
        //    Console.Write("Enter Age : ");
        //    int age = int.Parse(Console.ReadLine());

        //    students.Add(new Student(id, name, age));

        //    Console.WriteLine("Student added successfully.");
        //}

        //static void DisplayStudents()
        //{
        //    Console.WriteLine("List of Students:");
        //    foreach (var stu in students)
        //    {
        //        Console.WriteLine($"Id: {stu.Id}, Name: {stu.Name}, Age: {stu.Age}");
        //    }
        //}

        //static void SearchStudent()
        //{
        //    Console.Write("Enter Id of Student : ");
        //    int id = int.Parse(Console.ReadLine());

        //    var student = students.Find(s => s.Id == id);

        //    if (student != null)
        //    {
        //        Console.WriteLine($"Id: {student.Id}, Name: {student.Name}, Age: {student.Age}");
        //    }
        //    else
        //    {
        //        Console.WriteLine("Student not found.");
        //    }
        //}

        //static void UpdateStudent()
        //{
        //    Console.Write("Enter Id of Student : ");
        //    int id = int.Parse(Console.ReadLine());

        //    var student = students.Find(s => s.Id == id);

        //    if (student != null)
        //    {
        //        Console.Write("Enter name : ");
        //        student.Name = Console.ReadLine();
        //        Console.Write("Enter Age : ");
        //        student.Age = int.Parse(Console.ReadLine());
        //    }
        //    else
        //    {
        //        Console.WriteLine("Student not found.");
        //    }
        //}

        //static void DeleteStudent()
        //{
        //    Console.Write("Enter Id of Student : ");
        //    int id = int.Parse(Console.ReadLine());

        //    var student = students.Find(s => s.Id == id);

        //    if (student != null)
        //    {
        //        students.Remove(student);
        //        Console.WriteLine("Student deleted successfully.");
        //    }
        //    else
        //    {
        //        Console.WriteLine("Student not found.");
        //    }
        //}




        //= = = = = A-2 = = = = =

        static List<CartItem> cartItems = new List<CartItem>();
        static void Main(string[] args)
        {
            int choice;
            while (true)
            {
                Console.WriteLine("\n1. Add Item to Cart");
                Console.WriteLine("2. Remove cart Items");
                Console.WriteLine("3. Display Cart Items");
                Console.WriteLine("4. Calculate TotalPrice");
                Console.WriteLine("5. Exit");
                Console.Write("Enter your choice: ");
                choice = int.Parse(Console.ReadLine());
                Console.WriteLine();

                switch (choice)
                {
                    case 1:
                        AddStudent();
                        break;
                    case 2:
                        DisplayStudents();
                        break;
                    case 3:
                        SearchStudent();
                        break;
                    case 4:
                        UpdateStudent();
                        break;
                    case 5:
                        DeleteStudent();
                        break;
                    case 6:
                        Console.WriteLine("Exiting...");
                        return;
                    default:
                        Console.WriteLine("Invalid choice. Please try again.");
                        break;
                }
            }
        }

        static void AddToCart()
        {
            
            int id = cartItems.Count==0 ? cartItems.Count + 1 : Math.Max(cartItems.Id)+1;
            Console.Write("Enter name : ");
            string name = Console.ReadLine();
            Console.Write("Enter Quantity: ");
            int qty = int.Parse(Console.ReadLine());
            Console.Write("Enter Price: ");
            double price = double.Parse(Console.ReadLine());
            Console.Write("Enter Discount: ");
            int dis = int.Parse(Console.ReadLine());

            cartItems.Add(new CartItem(id, name, qty, price, dis));

            Console.WriteLine("Item added to cart successfully.");
        }

        static void RemoveFromCart()
        {

        }
    }
}