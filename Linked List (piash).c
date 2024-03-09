#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head = NULL, *temp = NULL, *last = NULL, *newnode = NULL;

void creation()
{
    int n;
    printf("Enter node Number: \n");
    scanf("%d",&n);
    for (int i=0;i<n;i++ )
        {
            printf("Enter a value: \n");
            if(head == NULL)
            {
                temp = (struct node *)malloc(sizeof(struct node));
                scanf("%d",&temp->data);
                head = temp;
            }else
            {
                temp = (struct node *)malloc(sizeof(struct node));
                scanf("%d",&temp->data);
                last->next = temp;
            }
            last = temp;
        }
        last->next = NULL;
        printf("Node Created Successfully\n");
}

void insert_atnode()
{
    int data,i=0,pos;
    temp = (struct node *)malloc(sizeof(struct node));
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = head;
    printf("Enter the position\n");
    scanf("%d",&pos);
    while(i != pos-1)
    {
        temp = temp->next;
        i++;
    }
    printf("Enter the value: \n");
    scanf("%d",&data);
    newnode->data = data;
    newnode->next = temp->next;
    temp->next = newnode;
}

void delet()
{
    temp = (struct node *)malloc(sizeof(struct node));
    newnode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the value of the node you want to delete: \n");
    scanf("%d",&data);

    temp = head;
    while(temp != NULL)
    {
        if(temp->data == data)
        {
            if(newnode == NULL)
            {
                head = temp->next;
            }else
            {
                newnode->next = temp->next;
            }
            free(temp);
            return;
        }
        newnode = temp;
        temp =temp->next;
    }
}

void insert_beginning()
{
    int data;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: \n");
    scanf("%d",&data);
    temp->data = data;
    temp->next = head;
    head = temp;
}

void insert_last()
{
    int data;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: \n");
    scanf("%d",&data);
    temp->data = data;
    last->next = temp;
    temp->next = NULL;
    last = temp;
}

void search()
{
    int data,count = 0;
    printf("Enter the value:\n");
    scanf("%d",&data);

    temp = head;
    while(temp != NULL)
    {
        if(temp->data == data)
        {
            count++;
            printf("Found\n");
            break;
        }
        temp = temp->next;
    }
    if(count == 0)   printf("Not Found\n");
}

void update()
{
    int data,count = 0,data2;
    printf("Enter the value:\n");
    scanf("%d",&data);

    temp = head;
    while(temp != NULL)
    {
        if(temp->data == data)
        {
            printf("Enter the new data:\n");
            scanf("%d",&data2);
            temp->data = data2;
            count++;
            break;
        }
        temp = temp->next;
    }
    if(count == 0)   printf("Not Found\n");
}

void display()
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main ()
{
    int option;
    do
    {
        printf("1. Create\n2. Insert at node\n3. Delete a node\n4. Insert at begining\n5. Insert at last\n6. Search\n7. Update\n8. display\n9. exit\n\nEnter your option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                creation();
                break;
            case 2:
                insert_atnode();
                break;
            case 3:
                delet();
                break;
            case 4:
                insert_beginning();
                break;
            case 5:
                insert_last();
                break;
            case 6:
                search();
                break;
            case 7:
                update();
                break;
            case 8:
                display();
                break;
            case 9:
                return 0;
                break;
            default:
                printf("Wrong Choice! Try again\n");
                break;
        }
    }while(1);
}
