#include<stdio.h>

int max(int n1,int n2);
int min(int n1,int n2);

int main()
{
    int n1,n2,maximum,minimum;

    printf("enter two numbers: ");
    scanf("%d%d",&n1,&n2);

    maximum = max(n1,n2);
    minimum = min(n1,n2);

    printf("maximum number is %d\n",maximum);
    printf("minimum number is %d\n",minimum);

    return 0;
}

 int max(int n1,int n2)
 {
     return (n1 > n2)? n1:n2;
 }

 int min(int n1,int n2)
 {
     return (n1 > n2)? n2:n1;
 }
