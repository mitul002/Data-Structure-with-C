#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


struct node *createLinkedList(int arr[], int size)
{
    struct node *head, *temp, *current;
    for(int i=0;i<size; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
    }
}

int main()
{
   int a[5]={10, 20, 30};

   createLinkedList(a, 3);

    return 0;
}
