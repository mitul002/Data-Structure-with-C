#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Song
{
    char title[100];
    char artist[100];
    int seconds;
    struct Song *n;
}*head=NULL,*temp=NULL,*last=NULL;

void creation(){
    int num,i;
    printf("Enter the number of the Song: ");
    scanf("%d",&num);
    fflush(stdin);

    for(i=0;i<num;i++)
    {
        if(temp==NULL)
        {
            temp = (struct Song *)malloc(sizeof(struct Song));

            printf("Title of the Song: ");
            gets(temp->title);
            fflush(stdin);

            printf("Artist of the Song: ");
            gets(temp->artist);
            fflush(stdin);

            printf("Duration of the Song: ");
            scanf("%d",&temp->seconds);
            fflush(stdin);

            head=temp;
        }
        else{
            temp = (struct Song *)malloc(sizeof(struct Song));

            printf("Enter Title of the Song: ");
            gets(temp->title);
            fflush(stdin);

            printf("Enter Artist of the Song: ");
            gets(temp->artist);
            fflush(stdin);

            printf("Enter duration of the Song: ");
            scanf("%d",&temp->seconds);
            fflush(stdin);

            last->n=temp;
        }
        last=temp;
    }
    last->n=NULL;
    printf("Data Entry Successfull \n\n\n");
}

void insert()
{
    fflush(stdin);
    temp = (struct Song *)malloc(sizeof(struct Song));

    printf("Enter Title of the Song: ");
    gets(temp->title);
    fflush(stdin);

    printf("Enter Artist of the Song: ");
    gets(temp->artist);
    fflush(stdin);

    printf("Enter duration of the Song: ");
    scanf("%d",&temp->seconds);
    fflush(stdin);

    last->n=temp;
    temp->n=NULL;
    last=temp;
    printf("New Song Added \n\n\n");
}

void Delete()
{
    int count=0;
    char val[101];
    temp = (struct Song *)malloc(sizeof(struct Song));
    printf("Enter name of the Song you want to delete: ");
    fflush(stdin);
    gets(val);
    fflush(stdin);
    if(head==NULL)
    {
        printf("The Playlist is Empty.\n\n\n");
        return;
    }
    temp = head;
    struct Song *prev = NULL;
    while(temp != NULL)
    {
        if(strcmp(val,temp->title) == 0)
        {
            count=1;
            if(prev == NULL)
            {
                head = temp->n;
            }else
            {
                prev->n = temp->n;
            }
            free(temp);
            printf("Song Removed.\n\n\n");
            return;
        }
        prev = temp;
        temp = temp->n;
    }
    if(count==0)    printf("No Song found with given Title.\n\n\n");
}

void total_duration()
{
    int duration = 0;
    printf("\n\n");
    temp=head;
    while(1)
    {
        if(temp!=NULL)
        {
            duration += temp->seconds;
            temp=temp->n;
        }
        else    break;
    }
    printf("Duration: %d.\n\n",duration);
}

void display()
{
    printf("\n\n");
    temp=head;
    while(1)
    {
        if(temp!=NULL)
        {
            printf("%s %s %d -> ",temp->title ,/n temp->artist, /n temp->seconds);
            printf("-------------------------------");
            temp=temp->n;
        }
        else    break;
    }
    printf("NULL\n\n\n");
}

int main()
{
    int option;
    printf("Create a Playlist: \n");
    creation();
    do
    {
        printf("1. Display All Songs. \n2. Add a Song. \n3. Remove a Song. \n");
        printf("4. Total duration of the songs. \n5. Exit \n\nEnter your option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                display();
                break;
            case 2:
                insert();
            break;
            case 3:
                Delete();
                break;
            case 4:
                total_duration();
                break;
            case 5:
                return 0;
            default:
                printf("Wrong Choice\n");
            break;
        }
    }while(1);
}
