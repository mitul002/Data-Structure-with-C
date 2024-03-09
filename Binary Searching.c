#include<stdio.h>

int main()
{
    int arr[]={5,10,15,20,25,30,35,40,45};
    int value=40;

    int beg=0, end=8, mid;

    while(beg<=end)
    {
        mid=(beg+end)/2;

        if(arr[mid]==value)
        {
            printf("Value found at index %d", mid);
            return 0;
        }

        else if(value>arr[mid])
        {
            beg=mid+1;
        }

        else if(value<arr[mid])
        {
            end=mid-1;
        }
    }

    printf("value not found");
    return 0;

}

