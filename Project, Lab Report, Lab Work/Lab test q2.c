#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int rollnumber;
    char name [100];
    float GPA;
    struct Student *next;
}*head = NULL, *temp = NULL;


void creation()
{
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));
    temp = head;

    printf("Enter Name of the Student: ");
    fflush(stdin);
    gets(newNode->name);


    printf("Enter Roll no. of the Student: ");
    scanf("%d",&newNode->rollnumber);
    fflush(stdin);


    printf("Enter GPA of the Student: ");
    scanf("%f",&newNode->GPA);
    fflush(stdin);

    newNode->next = NULL;


    if(head == NULL)
    {
        head = newNode;
        printf("Data added Successfully.\n");
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Data added Successfully.\n");
}



void search()
{
    int rollnumber;
    float gpa;
    int flag = 0;
    printf("Enter the Roll number: ");
    scanf("%d",&rollnumber);

    temp=head;
    while(temp!=NULL)
    {
        if(rollnumber == temp->rollnumber)
        {
            printf("Enter the new CGPA: ");
            scanf("%f",&gpa);
            temp->GPA = gpa;
            flag = 1;
        }
        temp = temp->next;
    }
    if(flag == 1)
            printf("The Roll number %d has been changed to %.2f.\n\n", rollnumber, gpa);
    else
        printf("Name not found\n\n");
}



void display()
{
    printf("-----------------------------------------------\n");
    printf("Name          Roll No.              CGPA\n");
    printf("-----------------------------------------------\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%-15s %-19d %.2f \n",temp->name,temp->rollnumber,temp->GPA);
        temp=temp->next;
    }
    printf("-----------------------------------------------\n");
}
int main()
{
    int opt;
    while(1)
    {
        printf("1. Add a Student Record. \n2. Search for the student & Update GPA. \n3. Display All Student \n4. Exit");
        printf("\nEnter your option : ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                creation();
                break;
            case 2:
                search();
            break;
            case 3:
                display();
                break;
            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
            break;
        }
    }
}
