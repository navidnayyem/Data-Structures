//Q.1. Write a C program to calculate the sum of first n numbers.

#include <stdio.h>

int main()
{
    int num,i,sum=0;
    printf("Enter a Number: ");
    scanf("%i", &num);

    for(i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    printf("The Sum of Natural Numbers: %i", sum);
    return 0;
}
