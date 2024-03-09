#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *InsEnd(struct node *head, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p =head;


    while (p->next!=NULL)
    {
        p=p->next;
    }

    ptr->data = data;
    ptr->next = NULL;
    p-> next = ptr;
    return head;

}

int main()
{
    struct node *head, *first, *second;

    head = (struct node*)malloc(sizeof(struct node));
    first= (struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    head->data = 10;
    first->data= 20;
    second->data=30;

    head->next = first;
    first->next= second;
    second->next= NULL;

    int n;
    printf("Enter the Last Number: ");
    scanf("%d",&n);
    head = InsEnd(head,n);


    while(head!=NULL)
    {
        printf("%d ", head->data);
        head= head->next;
    }


    return 0;
}
