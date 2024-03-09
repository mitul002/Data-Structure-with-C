//STACK With Constant value
#include <stdio.h>
int maxsize=10;
int stack[10];
int top=-1;

int EmptyCheck ()
{
    if(top==-1)
      return 1;
    else
      return 0;
}
int FullCkeck()
{
    if(top==maxsize)
        return 1;
    else
        return 0;
}

int push(int data)
{

    if(!FullCkeck())
    {
        top=top+1;
        stack[top]=data;
        return 0;
    }
    else
    {
        printf("The stack is full.");
         return 0;
    }
}
int pop()
{

    if(!EmptyCheck())
    {
        int data=stack[top];
        top--;
        return data;

    }
    else
    {
        printf("The stack is Empty.");
        return 0;
    }
}
 int peek ()
 {
    return stack[top];
 }

int main() {
//   int x=4;
// printf("Enter 1st value: %d:\n",x);
  //  scanf("%d",&x);
    push(10);
    push(20);
    push(30);
    push(11);

  /*  printf("  The pushed data items are:\n");
  printf("        4-| 11 |\n");
  printf("        3-| 30 |\n");
  printf("        2-| 20 |\n");
  printf("        1-| 10 |\n");*/

   printf("  The first element (check peek) of the stack is: %d\n\n", peek());
   printf("  After Popping the data elements are:\n\n");
   while(!EmptyCheck())
   {
        int data=pop();

        printf(" |%d|\n",data);
   }

    return 0;
}
