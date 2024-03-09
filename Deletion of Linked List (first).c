#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *del1st(struct node *head)
{
    struct node *ptr = head;
    head= head->next;
    free(ptr);
    return head;
};


int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));



    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;


    head=del1st(head);
    head=del1st(head);


    //Traverse of Link List


    while(head!=NULL)
        {
            printf("%d ", head->data);
            head=head->next;
        }

    return 0;
}

