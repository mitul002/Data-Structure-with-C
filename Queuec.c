#include<stdio.h>
#define CAP 5

int queue[CAP];
int rear = -1, front = 0,  totalItem =0;

//queue start adding item from rear (back) side


void enqueue(int item)
{
    if(totalItem==CAP)
    {
        printf("Queue is full \n");
    }
    else
        rear = (rear+1)%CAP;
        queue[rear]=item;
        totalItem++;
}


int dequeue()
{
    if(totalItem==0)
    {
        printf("Queue is empty \n");
        return -1;
    }
  else
       {
        int frontItem = queue[front];
        queue[front] = -1;
        front = (front+1)%CAP;
        totalItem--;
        return frontItem;
       }
}


void printQueue()
{
    for( int i=0; i<CAP; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");

}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printQueue();

    enqueue(50);
    printQueue();

    enqueue(60);

    printf("\n Removed item: %d\n",dequeue());
    printf("\n Removed item: %d\n",dequeue());

    printQueue();
    enqueue(70);
    printQueue();


    printf("\n front item: %d\n",queue[front]);
    return 0;
}

