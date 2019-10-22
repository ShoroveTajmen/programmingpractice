#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *S;
};

void create(struct stack *st)
{
    printf("Enter the size : ");
    scanf("%d",&st->size);

    st->top = -1;
    st->S = (int *)malloc(st->size*sizeof(int));
}

void display(struct stack st)
{
    int i,top;
    for(i=top; i>=0; i--)
    {
        printf("%d",st.S[i]);
    }
    printf("\n");
}

void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
        printf("stack overflow\n");
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->top == -1)
        printf("stack underflow\n");
    else
    {
        x=st->S[st->top--];
    }
    return x;
}

int main()
{
    struct stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

    printf("%d\n",pop(&st));
    printf("%d\n",pop(&st));

    display(st);

    return 0;
}
















