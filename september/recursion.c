#include <stdio.h>
unsigned long fact(int num);
int main()
{
    int num;
    unsigned long factorial;
    printf("Enter any number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of %d is %lu", num, factorial);
    return 0;
}
unsigned long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return num * fact(num - 1);
}
