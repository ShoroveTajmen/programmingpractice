#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createList(int sizeOfNodeList);
void insertNodeAtBeginning(int data);
void displayList();

int main()
{
    int size,data;

    printf("Enter the total number of nodes : ");
    scanf("%d",&size);
    createList(size);

    printf("Data in the list\n");
    displayList();

    printf("\nEnter data to insert at beginning : ");
    scanf("%d",&data);
    insertNodeAtBeginning(data);

    printf("Data in the list\n");
    displayList();

    return 0;
}

void createList(int sizeOfNodeList)
{
    struct node *newnode,*temp;
    int data,i;

    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    else
    {
        printf("Enter data for node 1 :");
        scanf("%d",&data);

        head->data = data;
        head->next = NULL;

        temp = head;

        for(i=2; i<=sizeOfNodeList; i++)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            if(newnode == NULL)
            {
                printf("Unable to allocate to memory.");
                exit(0);
            }
            else
            {
                printf("Enter data for node %d",i);
                newnode->data = data;
                newnode->next = NULL;
                temp->next = newnode;
                temp = temp->next;
            }
        }
        printf("Singly linked list created \n");
    }
}

insetNodeAtBeginning(int data)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    else
    {
        newnode->data = data;
        newnode->next = head;
        head = newnode;

        printf("Data inserted\n");
    }
}
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("link is empty : ");
    }
    else
    {
        temp = head;
        while(temp!=NULL);
        {
            printf("Data = %d\n",temp->data);
            temp = temp->next;
        }
    }
}
