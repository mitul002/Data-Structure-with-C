#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    //calloc takes 2 parameter. And the parameters are separated by comma ,

    ptr=(int*)calloc(5, sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
        printf("Memory allocated successful");


    return 0;
}
