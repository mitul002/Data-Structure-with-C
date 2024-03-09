#include<stdio.h>

swap(int *ptr1 , int *ptr2)
{
    int temp = *ptr1;
       *ptr1 = *ptr2;
       *ptr2 = temp;
    printf("%d %d", *ptr1 , *ptr2);
}


int main()
{
    int num1, num2;

    printf("Input 2 numbers: ");
    scanf("%d %d",&num1, &num2);

    swap(&num1 , &num2);





    return 0;
}
