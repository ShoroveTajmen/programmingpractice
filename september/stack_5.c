#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*top = NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("Stack is full\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int peek(int pos)
{
    struct Node *p;
    int i;
    for(i=0; p!=NULL && i<pos-1; i++)
    {
        p = p->next;
    }
    if(p!=NULL)
        return p->data;
    else
        return -1;
}
int stacktop()
{
    if(top)
        return top->data;
    return -1;
}
int isempty()
{
    return top?0:1;
}
int isfull()
{
    struct Node *t;
    //t = (struct Node*)malloc(sizeof(struct Node);
    int x = t?1:0;
    free(t);
    return x;
}

void display()
{
    struct Node *t;
    t = top;
    while(t!=NULL)
    {
        printf("%d",t->data);
        t = t->next;
    }
    printf("\n");
}
int main()
{
    push(10);
    push(20);
    push(30);

    display();

    printf("%d",peek(1));

    return 0;

}











