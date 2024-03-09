#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};


int main()
{
    int x,y,z;
    printf("Enter numbers you want to add in the linked list:\n");
    scanf("%d %d %d",&x, &y, &z);


    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;

    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    a->data = x;
    b->data = y;
    c->data = z;

    a->next = b;
    b->next = c;
    c->next = NULL;

    c->prev =b;
    b->prev =a;
    a->prev =NULL;


    //Traverse of Link List

    printf("Forward: \n");
    while(a!=NULL)
        {
            printf("%d ", a->data);
            a=a->next;
        }


    printf("\nBackward: \n");
    while(c!=NULL)
        {
            printf("%d ", c->data);
            c=c->prev;
        }

    return 0;
}

