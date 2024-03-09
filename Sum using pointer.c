#include<stdio.h>

int main()
{
    int a,b, sum;
    int *ptr1, *ptr2;


    printf("Enter two number:");
    scanf("%d %d", &a, &b);

    ptr1=&a;
    ptr2=&b;

    sum=*ptr1 + *ptr2;
    printf("Sum = %d",sum);


    return 0;

}
