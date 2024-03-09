#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    //malloc takes 1 parameter
    ptr=(int*)malloc(20); // here we allocated 20 byte. we can write it like the comment bellow

    //ptr=(int*)malloc(5* sizeof(int));//

    if(ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
        printf("Memory allocated successful");


    return 0;
}
