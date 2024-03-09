#include <stdio.h>
#include <stdlib.h>

struct node{
 int *data;
 struct node *next;
}*head=NULL, *temp=NULL, *last=NULL ,*a=NULL, *b=NULL, *c=NULL;

void create()
{

        head=(struct node*)malloc(sizeof(struct node));
        a=(struct node*)malloc(sizeof(struct node));
        b=(struct node*)malloc(sizeof(struct node));
        c=(struct node*)malloc(sizeof(struct node));
        last=(struct node*)malloc(sizeof(struct node));
        head->data=a->data;
        head->next=a;


        a->data=b->data;
        a->next=b;


        b->data=c->data;
        b->next=c;


        c->data=last->data;
        c->next=last;


        last->data=NULL;
        last->next=NULL;

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("Data : %d\n", *(temp->data));
        temp=temp->next;
    }
}

int main()
{
    create();
    display();
    return 0;
}


