#include <stdio.h>

int main(void)
{
    int Next_multiple,i,j;

    i = 365, j = 7; //Part 1
    Next_multiple = i + j - i % j;
    printf("For i = 365 and j = 7\n");
    printf("The next multiple divisible by 7 is %i\n\n", Next_multiple);

    i = 12258, j = 23; //Part 2
    Next_multiple = i + j - i % j;
    printf("For i = 12,258 and j = 23\n");
    printf("The next multiple divisible by 23 is %i\n\n", Next_multiple);

    i = 996, j = 4; //Part 3
    Next_multiple = i + j - i % j;
    printf("For i = 996 and j = 4\n");
    printf("The next multiple divisible by 4 is %i\n", Next_multiple);

    return 0;
}
