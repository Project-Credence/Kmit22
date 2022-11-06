#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int find_max(struct Node* t)
{
    if(t==NULL)
    {
        return -1;
    }
    else if(t->next==NULL)
    {
        return t->data;
    }
    else
    {
        if(t->data>find_max(t->next)
        {
            return t->data;
        }
        else
        {
            return find_max(t->next);
        }
    }
}
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
}

int main()
{
    struct Node *t;
    int sum=0;
    addNode(25);
    addNode(40);
    addNode(34);
    addNode(11);
    addNode(22);
    for(t=head;t!=NULL;t=t->next)
    {
        printf("%d\n",t->data);
    }
    for(t=head;t!=NULL;t=t->next)
    {
        sum=sum+t->data;
    }
    printf("\nSum is =%d\n",sum);
    printf("\n max number =%d \n",find_max(head));
}
