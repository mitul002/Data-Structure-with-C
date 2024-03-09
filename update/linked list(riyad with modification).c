#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp=NULL,*last=NULL,*newnode=NULL;

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
            scanf("%d",&temp->data);
            head=temp;
            last=temp;
        }
        else
        {
            temp=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&temp->data);
            last->next=temp;
            last=temp;
        }

    }
    last->next=NULL;
    printf("Node Created Successfully\n");
}
////////////////////////////////////////////////////

void first_insert()
{
     temp = (struct node *)malloc(sizeof(struct node));
     printf("Enter value ");
     scanf("%d",&temp->data);

     temp->next=head;
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
     last=temp;

     printf("Last insert Successful \n");

}
/////////////////////////////////////////////////

void search()
{
    temp=head;
    int x;
    printf("Enter value you want to search\n");
    scanf("%d",&x);
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("Enter data for NewNode\n");
            scanf("%d",&newnode->data);
            newnode->next=temp->next;
            temp->next=newnode;

        }
        temp=temp->next;
    }
}
//////////////////////////////////////////////////

void update()
{
    temp=head;
    int x,check=0;
    printf("Enter the search value \n");
    scanf("%d",&x);
    while(temp!=NULL)
    {
        if(temp->data == x){
            check++;
            break;
        }
        temp=temp->next;
    }
    if(check==0)
      printf("Value Not found!!!\n");

    else{
        printf("Value Found. So enter new value : \n");
        scanf("%d",&temp->data);
        printf("Successfully updated \n");
    }

}
//////////////////////////////////////////////////

void display()
{
    temp=head;
    while(1)
    {
        if(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        else
            break;
    }
    printf("NULL\n");

}

////////////////////////////////////////////////////
main()
{
    int option;
    while(1)
    {
        printf("1. Create : \n");
        printf("2. First Insertion: \n");
        printf("3. Last Insertion: \n");
        printf("4. Search and Insert after value: \n");
        printf("5. Search and update: \n");
        printf("6. Display: \n");

        printf("\nEnter your option : ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            creation();
            break;
        case 2:
            first_insert();
            break;
        case 3:
            last_insert();
            break;
        case 4:
            search();
            break;
        case 5:
            update();
            break;
        case 6:
            display();
            break;
        default:
            printf("Wrong Choice\n");
            break;
        }
    }

}

