#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL, *newnode, *temp, *value;
    int n, search,check = 0;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &head->data);
            head->next = NULL;
            temp = head;
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    temp = head;
    printf("\nWhere you want to add : ");
    scanf("%d", &search);
    value = (struct node *)malloc(sizeof(struct node));
    printf("Which value you want to add : ");
    scanf("%d", &value->data);
    while(temp != NULL){
        if(temp->data == search)
            {
            check = 1;
            value -> next = temp->next;
            temp -> next = value;
            break;
        }
        temp = temp ->next;
    }
    if(check == 0)printf("Value not found\n");
    temp = head;
     while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
