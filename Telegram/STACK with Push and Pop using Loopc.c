 //STACK with Push and Pop using Loop
#include<stdio.h>
int maxsize=10;
int top=-1;
int stack[10];
int opction;

int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(top==maxsize)
    return 1;
    else
    return 0;
}
void push(void)
{
  int data;
    if(top>=maxsize-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&data);
        top++;
        stack[top]=data;

    }
}
void pop(void)
{
    if(top<=-1)
    printf("The Stack is Empty.");
    else
    {
        printf("The popped values are: %d\n",stack[top]);
        top--;
    }
}
void display(void)
{
    int i;
    if(top>=0)
    {
        printf("\n Stack Elements:");
        for(i=top;i>=0;i--)
        {
            printf("\n%d\n",stack[i]);
        }
    }
    else
        printf("The stack is unused:");
}
int main()
{
    int opction;


    do
    {
       printf("\n 1. push\n 2. pop\n 3. display\n ");
         printf("Enter your opction: ");
         scanf("%d",&opction);
        switch(opction)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
          printf("Wrong chiose and try again");
          break;

        }
    }
    while(1);
    return 0;
   }
