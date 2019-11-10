#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*head = NULL;


void createList(int A[],int n)
{
    struct Node *newnode,*last;
    int i;

    head = (struct Node *)malloc(sizeof(struct Node));
    head->data =A[0];
    head->prev = head->next = NULL;
    head = last;

    for(i=1; i<n; i++)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = A[i];
        newnode->next = last->next;
        newnode->prev = last;
        last->next = newnode;
        last = newnode;
    }
}

int length(struct Node *p)
{
    int len = 0;
    while(p!=NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

void display(struct Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }

    printf("\n");

}


int main()
{
    int A[] = {10,20,30,40};
    createList(A,4);

    printf("Length is %d\n",length(head));
    display(head);

    return 0;
}










