
#include<bits/stdc++.h>
using namespace std;
struct st
{
  int data;
  struct st *next, *prev;
} *head=NULL, *temp=NULL, *last=NULL,*tail=NULL, *newnode=NULL;

typedef struct st br;

void creation()
{
  int i,num;
  printf("Enter the node number:");
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
void NextNodePrint()
{
  temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
   }



void PrevNodePrint()
  {
  temp=last;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->prev;
    }
    printf("NULL");

}
void insertMiddle()//by position
{
  int n,position,i=1;
  printf("Enter the position- ");
  scanf("%d",&position);
  printf("Enter the data- ");
  scanf("%d",&n);
  newnode=(br*)malloc(sizeof( br));
  newnode->data=n;
  temp=head;
  while (i!=position-1)
  {
    temp=temp->next;
    i++;
  }
  newnode->next=temp->next;
  newnode->prev=temp;
  temp->next=newnode;
  temp=temp->next;
  temp->prev=newnode;

}
void insertAfterNode()
{

  int n,value;
  printf("Enter the search value- ");
  scanf("%d",&value);
  printf("Enter the new node- ");
  scanf("%d",&n);
  newnode=(br*)malloc(sizeof( br));
  newnode->data=n;
  temp=head;
  while (temp->data!=value)
  {
    temp=temp->next;
  }
  newnode->next=temp->next;
  newnode->prev=temp;
  temp->next=newnode;
  temp=temp->next;
  temp->prev=newnode;

}
void deleteNode()
{
  int n;
  printf("Enter the data to delete- ");
  scanf("%d",&n);

  temp=head;
  while (temp->data!=n)
  {
    temp=temp->next;
  }
  newnode=temp->next;
  newnode->prev=temp->prev;
  temp=temp->prev;
  temp->next=newnode;


}
int main()
{
    int option;
    while(1)
    {
      printf("1. creation\n");
    printf("2. next display\n");
      printf("3. prev Display\n");
       printf("4. middle insert by position\n");
       printf("5. Delete \n");
       printf("6. middle insert by value\n");
      printf("Enter you option: ");
      scanf("%d",&option);
      switch(option)
      {
          case 1:
            creation();
            break;
      case 2:
            NextNodePrint();
             break;
          case 3:
            PrevNodePrint();
            break;
          case 4:
             insertMiddle();
             break;
          case 5:
          deleteNode();
          break;
          case 6:
          insertAfterNode();
          break;
          default:
           printf("Wrong Choise--Please Try Again:\n");
           break;
       }
    }

    return 0;
}
