#include <stdio.h>

int main(void)
{
    int Next_Multiple, result;

    int i1 = 365, i2 = 7; //Part 1
    Next_Multiple = i1 + i2 - i1 % i2;
    printf("For i = 365\n");
    printf("The next multiple divisible by 7 is %i\n", Next_Multiple);
    result = Next_Multiple / i2;
    printf("%i divided by %i equals %i\n\n", Next_Multiple, i2, result);

    i1 = 12258, i2 = 23; //Part 2
    Next_Multiple = i1 + i2 - i1 % i2;
    printf ("For i = 12,258\n");
    printf ("The next multiple divisible by 23 is %i\n", Next_Multiple);
    result = Next_Multiple / i2;
    printf ("%i divided by %i equals %i\n\n", Next_Multiple, i2, result);

    i1 = 996, i2 = 4; //Part 3 NB i1 is already divisible by i2
    Next_Multiple = i1 + i2;
    printf ("For i = 996\n");
    printf ("The next multiple divisible by 4 is %i\n", Next_Multiple);
    result = Next_Multiple / i2;
    printf ("%i divided by %i equals %i\n\n", Next_Multiple, i2, result);

    return 0;
}
