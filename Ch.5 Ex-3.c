#include <stdio.h>

int main(void)
{
    int n = 0, n2 = 0;
    printf("TABLE OF MULTIPLES OF 5 AND THEIR TRIANGULAR NUMBERS\n\n");
    printf(" M   TN \n");
    printf("--- ----\n");
    while(n % 5 == 0, n <= 50)
        {
            n2 = n * (n + 1) / 2;
            printf("%2i  %i\n", n, n2);
            n = n + 5;
        }
    return 0;
}
