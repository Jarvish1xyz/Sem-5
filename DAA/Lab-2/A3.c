#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* createNode(int data) {
    struct node* newNode=(struct node*) malloc(sizeof(struct node));
    
    if(newNode==NULL) {
        return NULL;
    }

    newNode->info=data;
    newNode->link=NULL;
    return newNode;
}

void insertAtFirst(int data, struct node** head) {
    struct node* newNode=createNode(data);

    if(*head==NULL) {
        *head=newNode;
        return;
    }

    newNode->link=*head;
    *head=newNode;
}

void insertAtLast(int data, struct node** head) {
    struct node* newNode=createNode(data);

    if(*head==NULL) {
        *head=newNode;
        return;
    }

    struct node* save=*head;

    while(save->link!=NULL) {
        save=save->link;
    }
    save->link=newNode;
}

void deleteAtFirst(struct node** head) {
    if(*head==NULL) {
        printf("Linked list is empty");
        return;
    }

    struct node* temp=*head;
    *head= temp->link;
    free(temp);
}

void deleteAtLast(struct node** head) {
    if(*head==NULL) {
        printf("Linked list is empty");
        return;
    }

    struct node* save=*head;
    while((save->link)->link!=NULL) {
        save=save->link;
    }
    struct node* temp= save->link;
    save->link=NULL;
    free(temp);
}

void display(struct node** head) {
    if(*head==NULL) {
        printf("Linked list is empty");
        return;
    }

    struct node* save=*head;
    while(save!=NULL) {
        printf("%d -> ", save->info);
        save=save->link;
    }
}

int main() {
    struct node* head=NULL;

    int op,num;
    while (1)
    {
        printf("Enter a choice : \n");
        printf("1. Insert at first.\n");
        printf("2. Insert at last.\n");
        printf("3. Delete at first.\n");
        printf("4. Delete at last.\n");
        printf("5. Display list.\n");
        scanf("%d", &op);
        
        if (op == -1)break;
        
        switch (op)
        {
        case 1:
            printf("Enter the values : ");
            scanf("%d", &num);
            insertAtFirst(num, &head);
            break;
        case 2:
            printf("Enter the values : ");
            scanf("%d", &num);
            insertAtLast(num, &head);
            break;
        case 3:
            deleteAtFirst(&head);
            break;
        case 4:
            deleteAtLast( &head);
            break;
        case 5:
            display(&head);
            printf("\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}