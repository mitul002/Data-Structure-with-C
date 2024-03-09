#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;


void enQueue(int value)
{
  if (rear == SIZE - 1)
    printf("\nQueue Full.");
  else
    {
        if (front == -1)
        {
        front = 0;
        }
      rear++;
      items[rear] = value;
      printf("\nInserted: %d", value);
    }
}


void deQueue()
{
  if (front == -1 || front > rear)
   {
    printf("\nQueue Empty");
    return -1;
   }

  else
    {
    printf("\nItem Deleted : %d", items[front]);
    front++;
    }
}



void display()
{
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
    {
      printf("%d  ", items[i]);
    }
  printf("\n");
}


int main() {
////////////////////////
  deQueue();
////////////////////////
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  ///////////////////////
  deQueue();
  display();
  /////////////////////
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  deQueue();


  display();

  return 0;
}


