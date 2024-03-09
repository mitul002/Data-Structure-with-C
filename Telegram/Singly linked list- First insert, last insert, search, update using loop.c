
///Singly linked list- First insert, last insert, search, update using loop
#include <stdio.h>
#include<stdlib.h>
struct st{
    int d;
    struct st *n;
}*head=NULL,*temp=NULL,*last=NULL;

void creation()
{
    int num,i;
    printf("Enter node number ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
         printf("Enter node value ");
        if(temp==NULL)
    {
            temp = (struct st *)malloc(sizeof(struct st));
            scanf("%d",&temp->d);
            head=temp;
        }
        else{
             temp = (struct st *)malloc(sizeof(struct st));
             scanf("%d",&temp->d);
             last->n=temp;

        }
        last=temp;
    }
    last->n=NULL;
    printf("Successfully node created \n");
}
void first_insert()
{
     temp = (struct st *)malloc(sizeof(struct st));
     printf("Enter value ");
     scanf("%d",&temp->d);

     temp->n=head;
     head=temp;
     printf("First insert Successfull \n");

}
void last_insert()
{
     temp = (struct st *)malloc(sizeof(struct st));
     printf("Enter value ");
     scanf("%d",&temp->d);
     last->n=temp;
     temp->n=NULL;
     last=temp;

     printf("Last insert Successfull \n");

}

void update()
{
    temp=head;
    int value,check=0;
    printf("Enter the search value \n");
    scanf("%d",&value);
    while(temp!=NULL)
    {
        if(temp->d == value){
            check++;
            break;
        }
        temp=temp->n;
    }
    if(check==0)
      printf("Not found\n");
    else{
        printf("Found. So enter new value : \n");
        scanf("%d",&temp->d);
        printf("Successfully updated \n");
    }

}
void search()
{
    temp=head;
    int value,check=0;
    printf("Enter the search value \n");
    scanf("%d",&value);
    while(temp!=NULL)
    {
        if(temp->d == value){
            check++;
        }
        temp=temp->n;
    }
    if(check==0)
      printf("Not found\n");
    else
     printf("Found %d Times\n",check);

}
void display()
{
    temp=head;
    while(1)
    {
        if(temp!=NULL){
            printf("%d->",temp->d);
            temp=temp->n;
        }
        else
        break;
    }
    printf("NULL\n");

}
main()
{
    int option;
    int key;
    do{
         printf("1. Create : \n");
         printf("2. Display: \n");
         printf("3. First insert: \n");
         printf("4. last_insert: \n");
         printf("5. Search: \n");
         printf("6. Update: \n");
        printf("\nEnter your option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
             creation();
            break;
            case 2:
             display();
            break;
            case 3:
             first_insert();
            break;
            case 4:
             last_insert();
            break;
           case 5:
             search();
            break;
            case 6:
             update();
            break;
            default:
             printf("Wrong Choice\n");
            break;
        }
        //printf("\n1. continue\n");
       // printf("\n2. exit\n");

       // scanf("%d",&key);
    }while(1);

}
