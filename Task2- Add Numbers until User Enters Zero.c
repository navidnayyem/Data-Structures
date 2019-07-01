//Q.2. Write a C program to add numbers until user enters zero.

#include <stdio.h>

int main()
{
    int num, sum = 0;

    while(num != 0)
    {
        printf("Enter a number: ");
        scanf("%i", &num);
        sum = sum + num;
        printf("\nSum = %i\n\n",sum);
    }
    return 0;
}
