#include <stdio.h>

int main(void)
{
    int i1, i2, total = 0;
    printf("Please Enter the First Integer: ");
    scanf("%i", &i1);
    printf("Please Enter the Second Integer: ");
    scanf("%i", &i2);

    if(i1 % i2 == 0)
        {
            printf("\n%i is evenly divisible by %i\n", i1, i2);
            total = i1 / i2;
            printf("%i / %i = %i\n", i1, i2, total);
        }
    else
        {
            printf("\n%i is not evenly divisible by %i\n", i1, i2);
        }
    return 0;
}
