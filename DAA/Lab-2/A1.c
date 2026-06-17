#include <stdio.h>
#define size 10
int top = -1, stack[size];

void push(int num)
{
    if (top + 1 >= num)
    {
        printf("Stack Overflow");
        return;
    }
    stack[++top] = num;
    printf("Value successfully pushed");
}

int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow");
        return -1;
    }
    return stack[top--];
}

int peep()
{
    if (top < 0)
    {
        printf("Stack Underflow");
        return -1;
    }
    return stack[top];
}

void change(int place, int num)
{
    if (place < 0 || place >= size)
    {
        printf("Enter valid place to change!!!");
        return;
    }
    stack[top-place + 1] = num;
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d, ", stack[i]);
    }
}

int main()
{
    int op, num, pos;
    while (1)
    {
        printf("Enter a choice : \n");
        printf("1. Push a value.\n");
        printf("2. Pop a value.\n");
        printf("3. Peek at position.\n");
        printf("4. Change value at Position.\n");
        printf("5. Display Stack.\n");
        scanf("%d", &op);

        if(op==-1) break;

        switch (op)
        {
        case 1:
            printf("Enter the values : ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            num = pop();
            if(top!=-1) printf("\nPopped value is %d\n", num);
            break;
        case 3:
            num = peep();
            if(top!=-1) printf("\nValue at %d position is %d\n", top, num);
            break;
        case 4:
            printf("Enter the position from top : ");
            scanf("%d", &pos);
            printf("Enter the new value : ");
            scanf("%d", &num);
            change(pos, num);
            break;
        case 5:
            display();
            printf("\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}