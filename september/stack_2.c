#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(char x)
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

char pop()
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

int isBalanced(char *exp)
{
    int i;
    for(i=0; exp[i]!='\0'; i++)
    {
        if(exp[i]='(')
            push(exp[i]);
        else if(exp[i]=')');
        {
            if(top == NULL)
                return 0;
            pop();
        }
    }
    if(top == NULL)
        return 1;
    else
        return 0;
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
    char *exp = "((a+b)*(c-d))";

    printf("%c", isBalanced(exp));
    return 0;
}















