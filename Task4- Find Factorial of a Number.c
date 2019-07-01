//Q.4. Write a C program to find factorial of a number using for/while/do-while loop.

#include <stdio.h>

int main()
{
    int i,num,fact = 1;
    printf("Enter an integer number: ");
    scanf("%d",&num);

    while(num > 0)
    {
        fact = fact * num;  // factorial = factorial*number;
        num--;
    }

    printf("\nFactorial = %i\n", fact);
    return 0;
}
