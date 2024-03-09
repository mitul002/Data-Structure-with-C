#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    float b;
    struct node *next;
}*head=NULL,*temp=NULL,*last=NULL;


void creation()
{
    int n;
    printf("Node Number: \n");
    scanf("%d", &n);

    for(int i=0; i<n;i++)
    {
        temp= (struct node*)malloc(sizeof(struct node));
        printf("Input a: \n");
        scanf("%d",&temp->a);

        printf("Input b: \n");
        scanf("%f",&temp->b);

        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            last->next=temp;
        }
        last=temp;
    }
    last->next=NULL;
}


void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("a: %d\n", temp->a);
        printf("b: %.2f\n", temp->b);
        temp=temp->next;

    }
}

main()
{
    creation();
    display();
}
