#include <stdio.h>
void Even_Odd(int lower, int n);

int main()
{
    int n;
	printf("Print even or odd numbers in a given range :\n");

    printf("Range to print starting from 1 : ");
    scanf("%d", &n);

    printf("\nAll even numbers from 1 to %d are : ", n);
    Even_Odd(2, n);
    printf("\nAll odd numbers from 1 to %d are : ", n);
    Even_Odd(1, n);
    printf("\n\n");

    return 0;
}
void Even_Odd(int lower, int n)
{
    if(lower > n)
        return;
    printf("%d  ", lower);
    Even_Odd(lower+2, n);
}
