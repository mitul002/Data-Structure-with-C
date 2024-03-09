#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *ins1st(struct node *head, int data)
{
    struct node *ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr ->data = data;
    ptr ->next = head;
    return ptr;
};


int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));


    head->data = 10;
    first->data = 20;
    second->data = 30;

    head->next = first;
    first->next = second;
    second->next = NULL;

    //Insert first node
    printf("Enter the First Number: ");
    int n;
    scanf("%d",&n);
    head = ins1st(head , n);



    //Traverse of Link List


    while(head!=NULL)
        {
            printf("%d ", head->data);
            head=head->next;
        }

    return 0;
}

