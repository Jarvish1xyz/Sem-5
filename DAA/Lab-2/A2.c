#include <stdio.h>
#define size 10
int front = -1, rear=-1, queue[size];

void insert(int num)
{
    if(rear>=size) {
        printf("Queue Underflow");
    }
    if(front==-1 && rear==-1) {
        front++;
    }
    queue[++rear]=num;
}

int delete()
{
    if(front==-1) {
        printf("Queue Underflow");
        return 0;
    }
    int ans=queue[front];
    if(front==rear) {
        front=-1;
        rear=-1;
    }
    else {
        front++;
    }
    return ans;
}
void display()
{
    if(rear==-1) {
        printf("Queue is empty");
    }
    for(int i=front; i<=rear; i++) {
        printf("%d, ", queue[i]);
    }
}

int main()
{
    int op, num, pos;
    while (1)
    {
        printf("Enter a choice : \n");
        printf("1. Insert a value.\n");
        printf("2. Delete a value.\n");
        printf("3. Display Queue.\n");
        scanf("%d", &op);
        
        if (op == -1)break;
        
        switch (op)
        {
        case 1:
            printf("Enter the values : ");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            num = delete();
            if(front!=-1) printf("\nPopped value is %d\n", num);
            break;
        case 3:
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