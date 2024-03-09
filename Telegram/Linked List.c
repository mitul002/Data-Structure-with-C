#include <stdio.h>
#include <malloc.h>
struct ABC
{
  int data;
  struct ABC *address;
};
typedef struct ABC BR;
int main() {
  BR *first, *second,*third, *temp;

  first=(BR*)malloc(sizeof(BR));
  second=(BR*)malloc(sizeof(BR));
  third=(BR*)malloc(sizeof(BR));

  first->data=10;
  first->address=second;

  second->data=20;
  second->address=third;

  third->data=30;
  third->address=NULL;

  temp=first;
  while(temp!=NULL)
  {
    printf("%d->",temp->data);
    temp=temp->address;
  }
  printf("NULL");

}
