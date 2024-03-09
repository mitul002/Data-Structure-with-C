#include <stdio.h>
#include<stdlib.h>
struct st{
    int data;
    struct st *next;
}
*head=NULL,*temp=NULL,*last=NULL;

int main()
{
    int num,i;
    printf("Enter node number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
         printf("Enter node value ");
        if(temp==NULL){
            temp=(struct st *)malloc(sizeof(struct st));
            scanf("%d",&temp->data);
            head=temp;
            last=temp;
        }
        else{
             temp = (struct st *)malloc(sizeof(struct st));
             scanf("%d",&temp->data);
             last->next=temp;
             last=temp;
        }

    }
    last->next=NULL;
    printf("Successfully node created ");

    while(1)
    {
        if(head!=NULL){
            printf("%d->",head->data);
            head=head->next;
        }
        else
        break;
    }
    printf("NULL\n");


    return 0;
}
