#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a,b;
    int isPrime;

    printf("*The Prime Numbers from 1 to 100*\n\n");

    for (a=2;a<=100;a++){
            isPrime = 1;

            for (b=2;b<a;b++)
                if (a % b == 0)
                    isPrime = 0;


        if (isPrime != 0)
            printf("%i ", a);

    }
    printf("\n");
    return 0;
}
