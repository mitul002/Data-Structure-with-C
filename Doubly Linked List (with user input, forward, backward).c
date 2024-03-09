#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}
*head = NULL,*temp = NULL, *last = NULL;

void creation()
{
    int i,num;
    printf("Enter the node no: ");
    scanf("%d",&num);
    for(i=0; i<num ; i++)
    {
        if(temp==NULL)
        {
            temp= (struct node*)malloc(sizeof(struct node));
            scanf("%d",&temp->data);
            head=temp;
            head->prev=NULL;
            last=temp;

        }
        else
        {
            temp= (struct node*)malloc(sizeof(struct node));
            scanf("%d",&temp->data);
            last->next=temp;
            temp->prev=last;
            last=temp;

        }

    }
    last->next =NULL;
}

void next_display()
{

    while(head!=NULL)
    {
        printf("%d->", head->data);
        head=head-> next;
    }
    printf("NULL\n");
}

void prev_display()
{
    while(last!=NULL)
    {
        printf("%d->", last->data);
        last= last->prev;
    }
    printf("NULL\n");
}

int main()
{
int opt;
while(1)
    {
        printf(" 1.Creation\n 2.Forward\n 3.Backward \n");
        printf("Enter Your Option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            creation();
            break;

        case 2:
            next_display();
            break;

        case 3:
            prev_display();
            break;

        default:
            printf("Enter between 1-3");
        }
    }
    return 0;
}
