//Q.1. Write a C program to create  an array of size 10. Enter the element of the array as you wish.
//Your program should ask the user which number they want to search for and return the number with its position.

#include<stdio.h>

int main()
{
    int i,size,findElement,found;
    int array[10];
    printf("Enter the size of an array(1-10): ");
    scanf("%d", &size);
    printf("\nEnter %d Elements of an array:\n",size);
    for(i=0;i<size;i++)
        scanf("%d", &array[i]);

    printf("\nWhich Element do you want to search: ");
    scanf("%d", &findElement);

        for(i=0; i<size; i++)
            {
                if(array[i] == findElement)
                {
                    found = 1;
                    break;
                }
            }

        if(found == 1)
            {
                printf("\n%d is Found at Position %d\n", findElement, i + 1);
            }
        else
            {
                printf("\n%d is not Found in the Array\n", findElement);
            }
    return 0;
}
