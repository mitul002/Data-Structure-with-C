#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top=-1;

void push(int x)
{
    if(top<CAPACITY-1)
    {   top = top+1;
        stack[top]=x;
        printf("%d \n", stack[top]);
    }
    else
        printf("Stack full \n");
}

int pop()
{
    if(top>-1)
    {
        int value= stack[top];
        top=top-1;
        return value;
    }
    else
        printf("Empty stack");
        return -1;
}

int main()
{
    push(3);
    push(6);
    push(9);
    push(13);

    printf("%d is poped \n",pop());
    printf("%d is poped \n",pop());
    printf("%d is poped \n",pop());
    pop();

    return 0;
}
