#include <stdio.h>

int main(void)
{
    int n, rn;
    printf("Enter a Number: ");
    scanf("%i", &n);
    printf("\nReverse  Order: ");
    while(n != 0)
        {
            rn = n % 10;
            printf("%i", rn);
            n = n / 10;
        }
    printf("\n");
    return 0;
}
