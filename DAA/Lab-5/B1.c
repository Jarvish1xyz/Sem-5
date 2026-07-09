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

void insertAtLast(struct node** head, int data) {
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

struct node* FindMid(struct node* head, struct node* last) {
    struct node* slow = head;
    struct node* fast = head;

    while(fast!=last && fast->link!=NULL) {
        slow = slow->link;
        fast = (fast->link)->link;
    }

    if(fast==slow) return NULL;

    return slow;
}

struct node* BinarySearch(struct node* head, struct node* last, int val) {

    struct node* mid = FindMid(head, last);
    if(mid==NULL) return NULL;

    if(mid->info==val) {
        return mid;
    }
    else if(mid->info < val) {
        return BinarySearch(mid, last, val);
    }
    else {
        return BinarySearch(head, mid, val);
    }

    return NULL;
}

int main() {
    struct node* head=NULL;

    insertAtLast(&head, 1);
    insertAtLast(&head, 2);
    insertAtLast(&head, 3);
    insertAtLast(&head, 4);
    insertAtLast(&head, 5);

    int val;
    printf("Enter the value to search: ");
    scanf("%d", &val);
    
    struct node* ans = BinarySearch(head, NULL, val);
    if(ans!=NULL) {
        printf("i=%d", ans->info);
    }
    else {
        printf("Value does not exist in Linked list!!!");
    }

    return 0;
}