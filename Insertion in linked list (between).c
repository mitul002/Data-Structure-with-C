#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *InsIndex(struct node *head, int data, int index)
{    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p =head;

    int i=0;

    while (i!=index-1)
    {
        p=p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
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

    int n, pos;
    printf("Enter the number and position: ");
    scanf("%d %d",&n,&pos);

    head = InsIndex(head, n, pos);


    while(head!=NULL)
    {
        printf("%d ", head->data);
        head= head->next;
    }


    return 0;
}
