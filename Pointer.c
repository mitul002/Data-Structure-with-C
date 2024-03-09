//Pointer can store the address of a variable

#include<stdio.h>

int main()
{
    int a;
    int *ptr;


    printf("Enter a number:");
    scanf("%d", &a);

    printf("The number is %d",a);
    printf("\nThe address is %p",&a);

    ptr=&a;

    printf("\n\nAfter taking the address in pointer,the number is %d",*ptr);
    printf("\nAfter taking the address in pointer, the address is %p",ptr);


    return 0;

}
