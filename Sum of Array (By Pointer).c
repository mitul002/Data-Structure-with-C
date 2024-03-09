#include<stdio.h>

int main()
{
    int arr[5]= {1,4,8,12,16};
    int i, sum;

    for (i=0;i<5 ;i++ )
    {
        sum =sum+ *(arr+i);
    }

    printf("Sum of Array: %d \n",sum);


    return 0;
}
