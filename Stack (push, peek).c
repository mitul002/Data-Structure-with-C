#include<stdio.h>
#define CAPACITY 3


int stack [CAPACITY];
int top = -1;


void push(int x)
{
    if(top<CAPACITY-1)
    {
        top = top +1;
        stack[top]=x;
        printf("Item Added\n");
    }
    else
        printf("Space full\n");
}



int peek()
{
    if (top>-1)
        {
            return stack[top];
        }
    else
        printf("Empty stack\n");
        return -1;
}



int main()
{

    printf("Stack: \n\n");

    peek();
    push(4);
    push(5);
    push(7);

    printf("Top item is: %d",peek());

    return 0;
}
