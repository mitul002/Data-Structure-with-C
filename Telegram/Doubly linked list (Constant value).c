
// Doubly linked list (Constant value)
#include <stdio.h>
#include<stdlib.h>
struct st
{
    int data;
    struct st *next;
    struct st *prev;
} *a=NULL, *b=NULL ,*c=NULL,*head=NULL,*tail=NULL;
typedef struct st br;

void create()
{
    a=(br*)malloc(sizeof(br));
    b=(br*)malloc(sizeof(br));
    c=(br*)malloc(sizeof(br));

    a->data=10;
    a->next=b;
    a->prev=NULL;

    b->data=20;
    b->next=c;
    b->prev=a;

    c->data=30;
    c->next=NULL;
    c->prev=b;
    printf(" Node Created Successfully \n\n");

}

void forwardDisplay()
{
   head=a;
    while(head!=NULL)
    {
        printf(" %d->",head->data);
        head=head->next;
    }
    printf("NULL\n\n");
   // exit(0);
}

void backwardDisplay()
{
   tail=c;
    while(tail!=NULL)
    {
        printf(" %d->",tail->data);
        tail=tail->prev;
    }
    printf("NULL");
    //exit(0);
}
int main()
{
    int opction;
    printf("     Doubly Linked List Without Loop\n");
    printf("    ---------------------------------\n");
    do
    {
      printf(" 1. Creat linked list\n");
      printf(" 2. Next or Forward Display\n");
      printf(" 3. Prev or Backward Display\n");
      printf(" 4. Exit");
      printf("   \n Enter you opction: ");
      scanf("%d",&opction);
      switch(opction)
      {
          case 1:
              create();
              break;
          case 2:
              forwardDisplay();
              break;
         case 3:
              backwardDisplay();
              break;
        case 4:
              exit(0);
              break;
          //display();
         //braek;
         default:
             printf("Wrong Choise--Please Try Again:\n");
             break;
       }
    }while(1);

    return 0;
}
