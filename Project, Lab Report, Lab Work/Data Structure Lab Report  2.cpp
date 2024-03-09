#include<bits/stdc++.h>
using namespace std;
struct node{
 int *data1;

 struct node *next;
}*head=NULL, *temp=NULL, *last=NULL ,*a=NULL, *b=NULL, *c=NULL;

void create()
{


        head=(struct node*)malloc(sizeof(struct node));
        a=(struct node*)malloc(sizeof(struct node));
        b=(struct node*)malloc(sizeof(struct node));
        c=(struct node*)malloc(sizeof(struct node));
        last=(struct node*)malloc(sizeof(struct node));
        head->data1=a->data1;
        head->next=a;


        a->data1=b->data1;
        a->next=b;


        b->data1=c->data1;
        b->next=c;


        c->data1=last->data1;
        c->next=last;


        last->data1=NULL;
        last->next=NULL;

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<"Data1= "<<temp->data1<<endl;

         temp=temp->next;

    }
}
int main()
{
    create();
    display();
}
