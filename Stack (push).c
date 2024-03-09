#include<stdio.h>
#define CAPACITY 3


int stack [CAPACITY];
int top = -1;

void push(int x)
{
    if(top<CAPACITY-1)
    {
    stack[top]=x;
    top = top +1;
    printf("Item Added\n");
    }
    else
        printf("Space full\n");
}



int main()
{

    printf("Stack:\n\n");
    push(4);
    push(5);
    push(7);
    push(8);
    return 0;
}
