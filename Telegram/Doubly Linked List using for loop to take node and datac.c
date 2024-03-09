// Doubly Linked List using for loop to take node and data
#include<stdio.h>
#include<stdlib.h>
struct st
{
  int data;
  struct st *next, *prev;
} *head=NULL, *temp=NULL, *last=NULL,*tail=NULL;

typedef struct st br;

void creation()
{
  int i,num;
  printf("Enterb the node number:");
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {

    if(temp==NULL)
    {
      printf("Enter the data to node: ");
      temp=(br*)malloc(sizeof(br));
      scanf("%d",&temp->data);
      head=temp;
      last=temp;
      head->prev=NULL; ///only for doubly linked list purpose
    }
    else
    {
      temp=(br*)malloc(sizeof(br));
      printf("Enter the vale to node:");
      scanf("%d",&temp->data);
      last->next=temp;
      temp->prev=last; ///only for doubly linked list purpose
      last=temp;
    }
  }
  last->next=NULL;


  printf("Node Created Succeffuly\n");
}
void NextNode()
{
  temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
   }



void PrevNode()
  {
  temp=last;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->prev;
    }
    printf("NULL");

}
int main()
{
    int opction;
    while(1)
    {
      printf("1. creation\n");
    printf("2. next\n");
      printf("3. prev\n");
      printf("Enter you opction: ");
      scanf("%d",&opction);
      switch(opction)
      {
          case 1:
            creation();
            break;
      case 2:
            NextNode();
             break;
          case 3:
            PrevNode();
            break;
          default:
           printf("Wrong Choise--Please Try Again:\n");
           break;
       }
    }

    return 0;
}
