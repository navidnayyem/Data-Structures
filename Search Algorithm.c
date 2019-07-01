#include <stdio.h>

int main()
{
    int arr[100];
    int size, i, findElement, found;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements of array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &findElement);

    /* Assume that element does not exists in array */
    found = 0;

    for(i=0; i<size; i++)
    {
        /*
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(arr[i] == findElement)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        printf("\n%d is found at position %d\n", findElement, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array\n", findElement);
    }

    return 0;
}
