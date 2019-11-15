#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

void create(int A[],int n)
{
    int i;
    struct Node *newnode,*temp;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    temp = head;

    for(i=1;i<n;i++)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = A[i];
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }

}

void display(struct Node *p)
{
    while(p!=NULL)
    {

        printf("%d ",p->data);
        p = p->next;

    }
}

void Rdisplay(struct Node *p)
{
    if(p!=NULL)
    {
         Rdisplay(p->next);
         printf("%d\n",p->data);

        //printf("%d",p->data);
    }
}

int count(struct Node *p)
{
    if(p!=NULL)
        return count(p->next)+1;
    else
        return 0;
}

int Add(struct Node *p)
{
    int sum = 0;
    while(p!=NULL)
    {
        sum = sum+p->data;
        p = p->next;
    }
    return (sum);
}


int Max(struct Node *p)
{
    int max = 0;
    while(p!=NULL)
    {
        if(p->data>max)
            max = p->data;
        p = p->next;
    }
    return max;
}

struct Node * Lsearch(struct Node *p,int key)
{

    struct Node *q;
    while(p!=NULL)
    {
        if(key == p->data)
        {
            q->next = p->next;
            p->next = head;
            head = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;

}

void InsertNode(struct Node *p,int pos,int x)
{
    struct Node *t;
    int i;

    if(pos < 0 || pos > count(p))
    return;
    t =(struct Node*)malloc(sizeof(struct Node));
    t->data = x;

    if(pos == 0)
    {

        t->next = head;
        head = t;
    }
    else
    {
        for(i=0; i<pos-1; i++)
            p = p->next;
            t->next = p->next;
            p->next = t;
    }



}

void SortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;

    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if(head == NULL)
        head = t;
    else
    {
        while(p && p->data<x)
        {
            q = p;
            p = p->next;
        }
        if(p==head)
        {
            t->next=head;
            head = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }




    }
}

int DeletNode(struct Node *p,int pos)
{
    struct Node *q = NULL;
    int i;
    int x = -1;

     if(pos < 1 || pos > count(p))
        return -1;
     if(pos == 1)
     {
         q = head;
         x = head->data;
         head = head->next;
         free(q);
         return x;
     }
     else
     {
         for(i=0; i<pos-1;i++)
         {
             q=p;
             p = p->next;
         }

         q->next = p->next;
         x = p->data;
         free(q);
         return x;

     }
}

int isSorted(struct Node *p)
{
    p = (struct Node*)malloc(sizeof(struct Node));
    int x = -1;
    while(p!=NULL)
    {
        if(p->data < x)
            return 0;
        x = p->data;
        p = p->data;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;
    while(q!=NULL)
    {
        if(p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}

int main()
{

    int A[] = {10,20,20,30,40,50};
    create(A,6);

    InsertNode(head,0,10);

    RemoveDuplicate(head);
    Lsearch(head,2);


    display(head);
    printf("\n\n");



    return 0;
}














