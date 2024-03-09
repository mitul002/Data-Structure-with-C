#include<stdio.h>
#include<stdlib.h>



struct st{
    int d;
    struct st *n;
}*head=NULL,*temp=NULL,*last=NULL,*newNode=NULL;

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
//******middle insert by position:**********
void middle_insert()
{
    int position;
    printf("Enter the position no- ");
    scanf("%d", &position);
    newNode = (struct st *)malloc(sizeof(struct st));
    printf("Enter the new node data- ");
    scanf("%d", &newNode->d);
    temp = head;
    int i = 1;
    while (i != position)
    {
         i++;
         if(i != position)
         {
            temp = temp->n;
         }

        else
        {
           newNode->n = temp->n;
           temp->n = newNode;
        }
    }

}
// if u want to insert beside a particular data
void InsertAfterANode()
{
    temp = head;
    int i = 0, x;
    printf("Enter The search value\n");
    scanf("%d", &x);
    while (temp != NULL)
    {
        if (temp->d == x)
        {
            newNode = (struct st *)malloc(sizeof(struct st));
            printf("Enter data for node\n");
            scanf("%d", &newNode->d);
            newNode->n = temp->n;
            temp->n = newNode;
            temp = newNode;
        }
        temp = temp->n;
    }
}
void last_insert()
{    temp=last;
     last = (struct st *)malloc(sizeof(struct st));
     printf("Enter value ");
     scanf("%d",&last->d);
     temp->n=last;
     last->n=NULL;
     last=temp;

     printf("Last insert Successfull \n");

}

void DeleteNode()
{
      int data;
    printf("Enter the data that u want to delete: ");
    scanf("%d", &data);


    temp=head;
    newNode=head;
    while(temp!=NULL)
    {
        if(head->d==data)
        {
            temp=temp->n;
            head=temp;
        }
        else if(temp->d == data){

            newNode->n=temp->n;

        }

         newNode=temp;
        temp=temp->n;

    }
}
void update()
{
    temp = head;
    int n, count = 0;
    printf("Enter the search value\n");
    scanf("%d", &n);
    while (temp != NULL)
    {
        if (temp->d == n)
        {
            count = 1;
            break;
        }

        temp = temp->n;
    }
    if (count == 0)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Found, So enter new value: \n");
        scanf("%d", &temp->d);
        printf("Succesfully Updated\n");
    }
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {

            printf("%d->",temp->d);
            temp=temp->n;

    }
    printf("NULL\n");

}

int main()
{
    int option;

    do{
         printf("1. Create : \n");
         printf("2. Display: \n");
         printf("3. Update: \n");
         printf("4. middle insert by position: \n");
         printf("5. Middle insert by value\n");
         printf("6. First insert\n");
         printf("7. last insert\n");
         printf("8. Delete Node\n");
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
              update();
            break;
             case 4:
               middle_insert();
            break;
            case 5:
            InsertAfterANode();
            break;
            case 6:
            first_insert();
            break;
            case 7:
            last_insert();
            break;
            case 8:
            DeleteNode();
            break;
            default:
             printf("Wrong Choice\n");
            break;
        }

    }while(1);

}
