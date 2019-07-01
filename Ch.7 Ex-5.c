#include <stdio.h>

int main(void)
{
    int numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j;

    for(j = 0; j < 10; ++j)
        for(i = 0; i < j; ++i)
            numbers[j] += numbers[i];

    for(j = 0; j < 10; ++j)
        printf("%i ", numbers[j]);

    printf("\n");

    return 0;
}

/*The expected output from the program in this exercise is 1 1 2 4 8 16 32 64 128 256
The program is based around an array that holds ten integers. A given value in the array is set to the sum of all values
before the given value, except for the very first value that is set to 1.*/
