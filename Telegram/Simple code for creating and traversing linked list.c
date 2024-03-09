#include <stdio.h>
#include <stdlib.h>

struct ABC
{
  int data ;
  struct ABC *address;
};

int main()
{
  struct ABC *f1;
  f1=NULL;

  f1=(struct ABC*)malloc(sizeof(struct ABC));
  f1->address=(struct ABC*)malloc(sizeof(struct ABC));
  f1->address->address=(struct ABC*)malloc(sizeof(struct ABC));

  printf("Enter the valu to 1st LInked list \n");
  scanf("%d->",&f1->data);

//  f1->data=13;
  printf("Enter the valu to 2nd LInked list\n");
  scanf("%d->",&f1->address->data);

//  f1->address->data=15;
//  printf("Enter the valu to 3rd LInked list\n");
//  scanf("%d->",&f1->address->address->data);


//  f1->address->address->data=20;
  f1->address->address->address=NULL;

  printf("%d->",f1->data);
  printf("%d->",f1->address->data);
  printf("%d->",f1->address->address->data);
  printf("NULL");
  // your code goes here
  return 0;
}
