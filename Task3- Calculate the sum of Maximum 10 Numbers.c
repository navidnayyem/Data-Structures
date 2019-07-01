//Q.3. Write a C program to calculate the sum of maximum 10 numbers.

#include <stdio.h>

int main()
{
    int i, num, sum = 0;
    printf("Enter the 10 Numbers: \n");
    for(i=0;i<10;i++)
        {
        scanf("%i", &num);
        sum = sum + num;
        }
    printf("\nThe Sum of 10 Numbers = %i\n",sum);
    return 0;
}
