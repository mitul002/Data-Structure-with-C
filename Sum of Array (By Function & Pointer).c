#include<stdio.h>

sum(int *ptr , int size)
{
    int i, sum=0;

    for (i=0;i<size ;i++ )
    {
        sum= sum+ *(ptr+i);
    }
    printf("Sum of Array: %d \n",sum);
}



int main()
{
    int arr[5]= {5,10,15,20,25};
    sum (&arr, 5);

    return 0;
}

