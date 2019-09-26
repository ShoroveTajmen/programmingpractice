#include<stdio.h>
int AddNaturalNum(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("sum = %d",AddNaturalNum(n));
    return 0;
}
int AddNaturalNum(int n)
{

     if(n==0)
        return n;
    else
        return (n+AddNaturalNum(n-1));
}
