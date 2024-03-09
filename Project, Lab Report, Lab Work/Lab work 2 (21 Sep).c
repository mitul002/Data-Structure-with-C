#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *a;
};



int main()
{
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *a = NULL;
    struct node *b = NULL;


    head = (struct node*)malloc(sizeof(struct node));
    first= (struct node*)malloc(sizeof(struct node));
    a= (struct node*)malloc(sizeof(struct node));
    b= (struct node*)malloc(sizeof(struct node));


    head->data = 10;
    head->next = first;

    first->data= NULL;
    first->next= NULL;

    head->a = first->a;



    while(head!=NULL)
    {
        printf("%d ", head->data);
        head= head->next;
    }


    return 0;
}




/* #include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *a;
}
*head=NULL,*temp=NULL,*last=NULL, *a=NULL, *b=NULL;

void creation()
{
    head=(struct node*)malloc(sizeof(struct node));
    temp=(struct node*)malloc(sizeof(struct node));
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));


  head->data=10;
  head->next=temp;

  temp->data=NULL;
  temp->next=NULL;

  head->a = temp->a;
}


void display()
{
    while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
}


int main()
{
    creation();
    display();

    return 0;
}
*/
