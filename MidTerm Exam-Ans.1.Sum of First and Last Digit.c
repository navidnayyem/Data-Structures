#include<stdio.h>

int main(void)
{
    int a,n,sum = 0;
    printf("Enter a Number: ");
    scanf("%i", &n);

    do
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    while (n > 0);

    printf("\nSum of the Digits: %i\n", sum);
    return 0;
}
