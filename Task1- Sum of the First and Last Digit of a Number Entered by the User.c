//Q.1. Write a C program to calculate the sum of the first and last digit of a number entered by the user.

#include <stdio.h>

int main()
{
    int num,sum,FirstDigit,LastDigit;
    printf("Enter a Number to Find Sum of First & Last Digit: ");
    scanf("%i", &num);

    LastDigit = num % 10;
    FirstDigit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    FirstDigit = num;

    sum = FirstDigit + LastDigit;
    printf("\nThe Sum of First and Last Digit of the Number: %i", sum);

    return 0;
}
