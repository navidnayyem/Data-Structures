//Q.2. Write a C program that prints all Armstrong Numbers in a range determined by the user.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i, end;
    printf("Enter Upper Range: ");
    scanf("%d", &end);

    printf("Armstrong Numbers Between 1 to %d are: \n", end);

    for(i=1;i<=end;i++)
    {
        sum = 0;
        num = i;

        digits = (int) log10(num) + 1;

        while(num > 0)
        {
            lastDigit = num % 10;
            sum = sum + ceil(pow(lastDigit, digits));
            num = num / 10;
        }

        if(i == sum)
        {
            printf("%d\t", i);
        }

    }
    return 0;
}
