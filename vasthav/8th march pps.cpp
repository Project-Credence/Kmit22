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
    
        temp->next=head;
        head=temp;
    
    return head;
}
struct Node *insertNode(int pos,int d)
{
    if(pos==0)
    {
        return addNode(d);
    }
    else
    {
        struct Node *temp=head;
        int i=0;
        struct Node *nptr;
        while(i<(pos-1))
        {
            temp=temp->next;
            i=i+1;
        }
        nptr=(struct Node *)malloc(sizeof(struct Node));
        nptr->next=NULL;
        nptr->data=d;
        nptr->next=temp->next;
        temp->next=nptr;
        return head;
    }
}n
struct Node *deletenode(int p)
{
    int i=0;
    struct Node *temp=head;
    struct Node *dptr;
    if(p==0)
    {
        head=temp->next;
        return head;
    }
    else
    {
        while(i<p-1)
        {
            temp=temp->next;
            i++;
        }
        dptr=temp->next;
        temp->next=dptr->next;
        free(dptr);
        return head;
    }
}
int find_sum(struct Node* t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        return t->data+find_sum(t->next);
    }
}
int find_max(struct Node*t)
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
        int m=find_max(t->next);
        if(t->data>m)
        {
          return t->data; 
        }
        else
        {
            return m;
        }
        
    }
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
    printf("\nNew List\n");
    head=deletenode(0);
    for(t=head;t!=NULL;t=t->next)
    {
        printf("%d\n",t->data);
    }
    return 0;
}
