#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*front = NULL,*rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    if(t == NULL)
    {
        printf("queue is full\n");
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if(front == NULL)
            front = rear = t;

    else
    {
        rear->next = t;
        rear = t;
    }
    }
}

int deque()
{
    int x = -1;
    struct Node *t;

    if(front == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void display()
{
    struct Node *p = front;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("%d ",deque());
    return 0;
}















