#include<stdio.h>
#include<stdlib.h>
​
struct node {
    int data;
    struct node *next;
};
​
void createList(int sizeOfList);
void traverseList();
​
struct node *head;
​
int main(){
    int size;
    printf("enter the size of list: ");
    scanf("%d",&size);
​
    createList(size);
​
    printf("\n Data in This List: \n");
    traverseList();
}
​
void createList(int sizeOfList){
​
    if(sizeOfList == 0) return;
​
    int inputNodeData;
    printf("enter data for node 1: ");
    scanf("%d",&inputNodeData);
​
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        printf("unable to allocate memory");
        exit(0);
    }
​
    head->data = inputNodeData;
    head->next = NULL;
​
    //printf("%d\n",head->data);
​
    int i;
    struct node *newNode, *temp;
    temp = head;
    for(i=2; i<=sizeOfList; i++){
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL){
            printf("unable to allocate memory");
            exit(0);
        }
​
        printf("enter data for node %d: ",i);
        scanf("%d",&inputNodeData);
​
        newNode->data = inputNodeData;
        newNode->next = NULL;
​
        temp->next = newNode;
        temp = newNode;
    }
}
​
void traverseList(){
    struct node *temp;
​
    if(head == NULL){
        printf("list is null");
        return;
    }
​
    temp = head;
    while(temp != NULL){
        printf("Data = %d\n",temp->data);
        temp = temp->next;
    }
}
