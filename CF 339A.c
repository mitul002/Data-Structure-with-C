#include <stdio.h>
#include<string.h>

int main()
{
    int n,i,j,temp,k,count=0,a=0;
    char arr[10000],brr[10000];
    scanf("%s",arr);
    k=strlen(arr);

    for (i=0;i<k;i=i+2)
    {
        brr[a]=arr[i];
        a++;
    }

    for(i=1;i<a;i++)
    {
        temp=brr[i];
        j=i-1;
        while(j>=0 && brr[j]>temp)
        {
            brr[j+1] = brr[j];
            j--;
        }
        brr[j+1]=temp;
    }
    printf("%c",brr[0]);
    for(i=1;i<a;i++)
    {
        printf("\+%c",brr[i]);
    }
    printf("\n");
    return 0;
}
