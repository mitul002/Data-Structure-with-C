#include<stdio.h>
#include<stdlib.h>
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

void middle_insert()
{
    int position;
    printf("Enter the position no:");
    scanf("%d", &position);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the new node data: ");
    scanf("%d", &newnode->data);
    temp = head;
    int i = 1;
    while (i != position)
    {
         i++;
         if(i!= position)
         {
            temp = temp->next;
         }

        else
        {
           newnode->next = temp->next;
           temp->next = newnode;
        }
    }

}

/////////////////////////////////////////////////
void search_Insert()
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
    int x,flag=0;
    printf("Enter the search value \n");
    scanf("%d",&x);
    while(temp!=NULL)
    {
        if(temp->data == x){
            flag++;
            break;
        }
        temp=temp->next;
    }
    if(flag==0)
      printf("Value Not found!!!\n");

    else{
        printf("Value Found. So enter new value : \n");
        scanf("%d",&temp->data);
        printf("Successfully updated \n");
    }

}

//////////////////////////////////////////////////
void del1st()
{
    temp = head;
    head = head->next;
    free(temp);
}

//////////////////////////////////////////////////
void Search_Delete()
{
    int x;
    printf("Enter the data that you want to delete: ");
    scanf("%d", &x);


    temp=head;
    newnode=head;
    while(temp!=NULL)
    {
        if(head->data==x)
        {
            temp=temp->next;
            head=temp;
        }
        else if(temp->data == x){

            newnode->next=temp->next;

        }

         newnode=temp;
        temp=temp->next;

    }
}


/*void Search_Delete()
{
    int x;
    printf("Enter the data that you want to delete: ");
    scanf("%d", &x);

    temp=head;
    while(temp != NULL)
    {
        if(temp->data == x)
        {
            if(newnode == NULL)
            {
                head = temp->next;
            }
            else
            {
                newnode->next = temp->next;
            }
            free(temp);
            return;
        }
        newnode=temp;
        temp=temp->next;
    }
}
*/


//////////////////////////////////////////////////




void display()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL \n\n");
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
        printf("4. Middle Insert By Index: \n");
        printf("5. Search and Insert after value: \n");
        printf("6. Search and update value: \n");
        printf("7. Delete 1st value: \n");
        printf("8. Search and delete value: \n");
        printf("9. Display: \n");

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
            middle_insert();
            break;
        case 5:
            search_Insert();
            break;
        case 6:
            update();
            break;
        case 7:
            del1st();
            break;
        case 8:
            Search_Delete();
            break;
        case 9:
            display();
            break;

        default:
            printf("Wrong Choice\n");
            break;
        }
    }

}

