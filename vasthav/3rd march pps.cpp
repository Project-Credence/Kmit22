#include<stdio.h>    
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *addNode(int d){
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=d;
    temp->next=NULL;
    if(head==NULL) 
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    return head;
};
int main()
{
    int sum=0;
    struct Node *t;
    addNode(5);
    addNode(15);
    addNode(20);
    addNode(10);
    for(t=head;t!=NULL;t=t->next)
    {
        printf("%d ",t->data);
    }
    for(t=head;t!=NULL;t=t->next){
        sum=sum+t->data;
    }
    printf("\nsum is %d",sum);
}
