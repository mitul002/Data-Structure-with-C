
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev; //for doubly
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
            head->prev=NULL; //for doubly
            last=temp;
        }
        else{
            temp=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&temp->data);
            last->next=temp;
            temp->prev=last; //for doubly
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
     temp->prev = NULL; //for doubly
     head->prev = temp; //for doubly
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
     temp->prev=last; //for doubly
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
         {temp = temp->next;
         }
        else
        {  newnode->next = temp->next;
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
        }temp=temp->next;
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
    head->prev = NULL; //for doubly
    free(temp);
}
/////////////////////////////////////////////////
void dellast() //for doubly
{
    temp = last;
    newnode = last->prev;
    newnode->next = NULL;
    last = newnode;
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
//////////////////////////////////////////////////
void display()
{   temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL \n\n");
}
///////////////////////////////////////////////////
void prev_display()
{
    while(last!=NULL)
    {
    printf("%d->", last->data);
        last= last->prev;
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
        printf("4. Middle Insert By Index: \n");
        printf("5. Search and Insert after value: \n");
        printf("6. Search and update value: \n");
        printf("7. Delete 1st value: \n");
        printf("8. Delete last value: \n");
        printf("9. Search and delete value: \n");
        printf("10. Display Forward: \n");
        printf("11. Display Backward: \n");

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
            del1st();
            break;
        case 9:
            Search_Delete();
            break;
        case 10:
            display();
            break;
        case 11:
            prev_display();
            break;

        default:
            printf("Wrong Choice\n");
            break;
        }
    }

}

