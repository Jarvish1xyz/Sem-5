using System;

namespace Lab_4;

interface INotificationService
{
    void display();
}

class EmailNotification : INotificationService
{
    public void display()
    {
        Console.WriteLine("Email Notification recived!!!");
    }
}

class SMSNotification : INotificationService
{
    public void display()
    {
        Console.WriteLine("SMS Notification recived!!!");
    }
}