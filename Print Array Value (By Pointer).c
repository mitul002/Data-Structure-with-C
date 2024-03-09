
#include<stdio.h>

int main()
{
    int arr[5]= {1,4,8,12,16};

    int *prt = &arr[2];

    printf("%d\n",*(prt));
    printf("%d\n",*(prt+1));
    printf("%d\n",*(prt-1));

    return 0;
}
