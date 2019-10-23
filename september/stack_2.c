#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

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

int pop()
{
    struct Node *t;
    int x = -1;
    if(top == NULL)
    {
       printf("Stack is empty\n");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display()
{
    struct Node *temp;
    temp = top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("\n");


}
int main()
{
    push(30);
    push(10);
    push(20);

    display();

    printf("%d\n",pop());
    return 0;
}















