//Q.2. Write a C program to separate even and odd numbers into two separate arrays from the original array given below.
// 4    2   1   3   6   8   7   16  13  9

#include<stdio.h>

int main()
{
    int array[10]={4,2,1,3,6,8,7,16,13,9};
    int i, num;

    printf("The Elements of the Array are: 4   2   1   3   6   8   7   16  13  9\n");

    printf("\nEven Numbers in the Array are - ");
    for(i=0;i<9;i++)
    {
        if(array[i] % 2 == 0)
        {
            printf("%d\t", array[i]);
        }
    }

    printf("\nOdd Numbers in the Array are  - ");
    for(i=0;i<9;i++)
    {
        if(array[i] % 2 != 0)
        {
            printf("%d\t", array[i]);
        }
    }

    printf("\n");
    return 0;
}

