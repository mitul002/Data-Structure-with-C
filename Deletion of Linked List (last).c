#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *delEnd(struct node *head)
{
    struct node *p =head;
    struct node *q= p->next;


    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    p->next = NULL;
    free(q);
    return head;

}

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


    head=delEnd(head);


    //Traverse of Link List


    while(head!=NULL)
        {
            printf("%d ", head->data);
            head=head->next;
        }
    return 0;
}

