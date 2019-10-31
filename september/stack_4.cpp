#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*top = NULL;

void push(int x)
{
  Node *t;
  t = new Node();
  if(t == NULL)
  {
      cout<<"stack is full";
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

    Node *t;
    int x = -1;
    if(top == NULL)
    {
        cout<<"stack is empty";
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
    Node *t;
    t == top;
    while(t!=NULL)
    {
       cout<< t->data<< " ";
       t = t->next;
    }
    cout<<" ";
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    pop();

    display();

    return 0;
}












