#include <stdio.h>
int sumOfEvenOdd(int lower, int upper);

int main()
{
    int lower, upper, sum;
    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Sum of even/odd numbers between %d to %d = %d\n", lower,upper,sumOfEvenOdd(lower, upper));

    return 0;
}


int sumOfEvenOdd(int lower, int upper)
{
    if(lower > upper)
        return 0;
    else
        return (lower + sumOfEvenOdd(lower + 2,upper));
}

