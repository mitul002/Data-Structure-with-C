#include<stdio.h>

int main()
{
    int a;


    printf("Enter a number:");
    scanf("%d", &a);

    printf("The number is %d",a);
    printf("\nThe address is %p",&a);

    return 0;

}
