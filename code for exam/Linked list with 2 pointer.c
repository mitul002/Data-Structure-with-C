#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data1;
    int *data2;
    struct node *next;
}*head=NULL,*last=NULL;

int main()
{
    head=(struct node*)malloc(sizeof(struct node));
    last=(struct node*)malloc(sizeof(struct node));

    head->data1='G';
    head->data2=last->data2;
    head->data2=NULL;

    head->next=last;


    last->data1='H';
    last->data2=NULL;
    last->next=NULL;

    while(head!=NULL)
    {
        printf("%c  %d -> ",head->data1,head->data2);
        head=head->next;
    }
    printf("  NULL\n");
    return 0;
}
