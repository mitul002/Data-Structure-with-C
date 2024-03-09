#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
} *head = NULL, *newnode = NULL, *temp = NULL, *temp1 = NULL, *last = NULL, *temp2;

void creation()
{
    int n;
    printf("Enter how many node you want to create\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            printf("Enter for the first node data\n");
            scanf("%d", &head->data);
            head->next = NULL;
            head->prev = NULL;
            temp = head;
            last = head;
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data for other elemnet\n");
            scanf("%d", &newnode->data);
            last->next = newnode;
            newnode->prev = last;
            newnode->next = NULL;
            last = newnode;
        }
    }
    last->next = NULL;
}

void InsertAtFrist()
{

    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter for first node value\n");
    scanf("%d", &temp->data);

    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
}

void InsertionAtEnd()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter element for last node\n");
    scanf("%d", &newnode->data);
    last->next = newnode;
    newnode->prev = last;
    newnode->next = NULL;
    last = newnode;
}

void InsertionAtMiddle()
{
    temp = head;
    int i = 0, index;
    printf("\nEnter Index no\n");
    scanf("%d", &index);
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter element for middle node\n");
    scanf("%d", &newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode->next;
    temp->prev = newnode;
}

void DeleteAtFirst()
{
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void DeleteAtEnd()
{
    temp = last;
    temp1 = last->prev;
    temp1->next = NULL;
    last = temp1;
    free(temp);
}

void DeleteInBetween()
{
    temp = head;
    temp1 = head->next;
    int i = 0, index;
    printf("\nEnter which Index node you want to Delete\n");
    scanf("%d", &index);
    while (i < index - 1)
    {
        temp = temp->next;
        temp1 = temp1->next;
        i++;
    }
    temp2 = temp1->next;
    temp->next = temp1->next;
    temp2->prev = temp;
    free(temp1);
}

void display()
{
    printf("Printing general\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\nreverse\n");
    temp1 = last;
    while (temp1 != NULL)
    {
        printf("%d ", temp1->data);
        temp1 = temp1->prev;
    }
    printf("\n");
}

int main()
{
    creation();
    printf("\nAfter creation\n");
    display();

    InsertAtFrist();
    printf("\nAfter first node creation\n");
    display();

    InsertionAtEnd();
    printf("\nAfter last node creation\n");
    display();

    InsertionAtMiddle();
    printf("\nAfter Middle node creation\n");
    display();

    DeleteAtFirst();
    printf("\nAfter first node delete\n");
    display();

    DeleteAtEnd();
    printf("\nAfter second node creation\n");
    display();

    DeleteInBetween();
    printf("\nAfter middle node delete\n");
    display();

    return 0;
}
