#include<stdio.h>

int main()
{
    int arr[5]= {1,4,8,12,16};
    int i;

    for (i=0;i<5 ;i++ )
    {
        printf("%p \n", &arr[i]);
    }
    printf("\n%p \n",&arr);

    return 0;
}
