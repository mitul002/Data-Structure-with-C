#include<stdio.h>

int CAPACITY=3;
int stack [3];
int top = -1;

/////////////////////////////////////////
void push(int x)
{
    if(top<CAPACITY-1)
    {   top = top+1;
        stack[top]=x;
        printf("Pushed item is: %d\n", stack[top]);
    }
    else
        printf("Stack full \n");
}

/////////////////////////////////////////
int pop()
{
    if(top>=0)
    {
        int value= stack[top];
        top=top-1;
        printf("Popped item is: %d \n",value);

    }
    else
        printf("Empty stack \n");
        return -1;
}

/////////////////////////////////////////
int peek()
{
    if (top>=0)
        {
            printf("Top item is: %d \n",stack[top]);
        }
    else
        printf("Empty stack\n");
        return -1;
}

/////////////////////////////////////////
void display()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("|%d ",stack[i]);
    }
}


/////////////////////////////////////////
int main()
{

    printf("1.push 2.pop 3.peek 4.display \n");
        while(1)
        {
            int opt;
            scanf("%d", &opt);

            switch(opt)
            {
            case 1:
            int num;
            printf("Enter the number you want to push: ");
            scanf("%d",&num);
            push(num);
            break;


            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            default:
            printf("Enter between 1-4 \n");
            }
        }

    return 0;
}

