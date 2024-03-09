#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}
*head = NULL,*temp = NULL, *last = NULL, *newnode=NULL,*temp1 = NULL;

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
            head->prev=NULL; //for doubly
            last=temp;

        }
        else
        {
            temp= (struct node*)malloc(sizeof(struct node));
            scanf("%d",&temp->data);
            last->next=temp;
            temp->prev=last; //for doubly
            last=temp;

        }

    }
    last->next =NULL;
}


////////////////////////////////////////////////////

void first_insert()
{
     temp = (struct node *)malloc(sizeof(struct node));
     printf("Enter value ");
     scanf("%d",&temp->data);
     temp->next=head;

     temp->prev = NULL; //for doubly
     head->prev = temp;
     head=temp;
     printf("First insert Successful \n");
}

//////////////////////////////////////////////////

void last_insert()
{
     temp = (struct node*)malloc(sizeof(struct node));
     printf("Enter value ");
     scanf("%d",&temp->data);
     last->next=temp;
     temp->next=NULL;

     temp->prev=last; //for doubly
     last=temp;

     printf("Last insert Successful \n");
}
/////////////////////////////////////////////////////

void dellast()
{

    temp = last;
    newnode = last->prev;
    newnode->next = NULL;
    last = newnode;
    free(temp);
}

/////////////////////////////////////////////

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
        printf(" 1.Creation\n 2.Forward\n 3.Backward \n 4.First Insert \n 5.Last Insert \n 6.Delete Last element\n");
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
         case 4:
            first_insert();
            break;
         case 5:
            last_insert();
            break;
         case 6:
            dellast();
            break;

        default:
            printf("Enter between 1-3");
        }
    }
    return 0;
}
