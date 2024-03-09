#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr1, *ptr2;
    //calloc takes 2 parameter. And the parameters are separated by comma ,

    ptr1=(int*)malloc(4 *sizeof(int));
    ptr2=(int*)calloc(5, sizeof(int));

    if(ptr1==NULL || ptr2==NULL)
    {
        printf("Memory not allocated");
    }
    else
        printf("Memory allocated successful \n");

        ptr1=realloc(ptr1, 50);
        printf("Memory reallocate successful");

    return 0;
}


