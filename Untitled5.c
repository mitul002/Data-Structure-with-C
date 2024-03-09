
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node *head = NULL;
    struct node *b = NULL;
    struct node *c = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    b->data = 20;
    c->data = 30;

    head->next = b;
    b->next = c;
    c->next = NULL;





    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = 4;


    for(int i=2; i < 2; i++)
        {
        if(head->next != NULL)
        {
        head = head->next;
        }
    }
    newNode->next = head->next;
    head->next = newNode;


    //Traverse of Link List


    while(head!=NULL)
        {
            printf("%d ", head->data);
            head=head->next;
        }

    return 0;
}
