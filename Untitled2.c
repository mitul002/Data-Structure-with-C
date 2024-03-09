#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data1;
    float data2; //for extra data
    struct node *next;
}*head=NULL,*temp=NULL,*last=NULL,L;

///////////////////////////////////////////////////
void creation()
{
    int i,n;
    printf("Enter Number of Node  :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter Node data :");
        if(temp==NULL)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&temp->data1);
            scanf("%f",&temp->data2); //for extra data
            head=temp;
            last=temp;
        }
        else
        {
            temp=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&temp->data1);
            scanf("%f",&temp->data2); //for extra data
            last->next=temp;
            last=temp;
        }

    }
    last->next=NULL;
    printf("Node Created Successfully\n");
}

void display()
{

    while(head!=NULL)
    {
        printf("%d  %.2f  ->",head->data1, head->data2); //for extra data
        head=head->next;
    }
    printf("NULL \n\n");
}

int main()
{
    creation();
    display();
}
