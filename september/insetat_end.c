#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createList(int sizeOfList);
void insertNodeAtEnd(int data);
void displayList();

int main()
{
   int size,data;

   printf("Enter the total number of nodes : ");
   scanf("%d",&size);
   createList(size);

   printf("Data in the list\n");
   displayList();

   printf("\n Enter data to insert at end : ");
   scanf("%d",&data);
   insertNodeAtEnd(data);

   printf("Data in the list\n");
   displayList();

   return 0;
}


void createList(int sizeOfList)
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
       printf("Enter the data of node 1 :");
       scanf("%d",&data);

       head->data = data;
       head->next = NULL;

       temp = head;

       for(i=0; i<sizeOfList; i++)
       {
           newnode = (struct node*)malloc(sizeof(struct node));
           if(newnode == NULL)
           {
               printf("Unable to allocate memory.");
               exit(0);
           }
           else
           {
               printf("Enter data of node %d",i);
               scanf("%d",&data);

               newnode->data = data;
               newnode->next = NULL;
               temp->next = newnode;
               temp = temp->next;
           }
       }
       printf("linked list created.");
   }
}

insertNodeAtEnd(int data)
{
    struct node *newnode,*temp;
    if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;

        temp = head;
        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void displayList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}






















