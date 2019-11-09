#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;


void create(int A[],int n)
{
    int i;
    struct Node *newnode,*last;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;

    for(i=1; i<n; i++)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = A[i];
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;

    }
}

void Display(struct Node *temp)
{
    do
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp!=head);
    printf("\n");
}

int main()
{
    int A[] = {1,2,3,4,5};
    create(A,5);

    Display(head);

    return 0;
}
