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

int main()
{
    struct Node *temp;
    int A[] = {3,5,7,10,15};
    create(A,5);

    temp = Lsearch(head,7);
    if(temp!=NULL)
    {
        printf("key is %d\n",temp->data);
    }
    else
    {
        printf("key is not found");
    }

    display(head);



    return 0;
}














