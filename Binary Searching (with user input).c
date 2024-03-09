#include<stdio.h>
int main()
{
    int arr[100];
    int beg=0, end, mid;

//take array value
    printf("How many value do you want to enter:");
    scanf("%d",&end);

     printf("Enter the values:\n");

    for(int i=0; i<end; i++)
    {
        scanf("%d", &arr[i]);
    }

//Take the value you want to search
    int value;
    printf("Enter the value do you want to search:");
    scanf("%d",&value);


//main binary searching portion
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
