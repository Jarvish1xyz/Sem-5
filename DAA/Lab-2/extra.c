#include <stdio.h>
#include <stdlib.h>
int size = 0;

struct node
{
    int info;
    struct node *link;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        return NULL;
    }

    newNode->info = data;
    newNode->link = NULL;
    return newNode;
}

void insert(int data, struct node **head)
{
    struct node *newNode = createNode(data);

    size++;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct node *save = *head;

    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = newNode;
}

void delete(struct node **head)
{
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    struct node *save = *head;
    while ((save->link)->link != NULL)
    {
        save = save->link;
    }
    struct node *temp = save->link;
    save->link = NULL;
    free(temp);
    size--;
}

void display(struct node **head)
{
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    struct node *save = *head;
    while (save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("\n");
}

void deleteMiddle(struct node **head)
{
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    struct node *save = *head;
    int mid;
    if (size % 2 != 0)
    {
        mid = (size / 2) - 1;
    }
    else
    {
        mid = (size / 2) - 2;
    }
    while (mid > 0)
    {
        save = save->link;
        mid--;
    }
    struct node *temp = save->link;
    save->link = (save->link)->link;
    free(temp);
    size--;
}

int main()
{
    struct node *head = NULL;

    int op, num;
    while (1)
    {
        printf("\nEnter a choice : \n");
        printf("1. Insert in list.\n");
        printf("2. Delete from list.\n");
        printf("3. Delete Middle node of list.\n");
        printf("4. Display list.\n");
        scanf("%d", &op);

        if (op == -1)
            break;

        switch (op)
        {
        case 1:
            printf("Enter the values : ");
            scanf("%d", &num);
            insert(num, &head);
            break;
        case 2:
            delete(&head);
            break;
        case 3:
            deleteMiddle(&head);
            break;
        case 4:
            display(&head);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
        printf("size = %d\n", size);
    }

    return 0;
}