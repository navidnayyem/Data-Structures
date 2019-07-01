//Q.1. Write a C program to find the largest two numbers in an array of size 10.
//The user will enter the elements in an array.

#include <stdio.h>

int main()
{
    int i,n;
    int arr[10];

    printf("Enter total number of elements(1 to 10): ");
    scanf("%d", &n);
    printf("Enter %d Elements: ", n);

    for(i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }

    for(i=1;i<n;i++)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %d", arr[0]);

    return 0;
}
