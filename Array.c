#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,arr[20],i,j,k,isize,dsize,sesize,ipos,dpos,num,findElement,found;
    printf("-----Array Implementation-----\n");
    printf("|    1.Insertion             |\n");
    printf("|    2.Deletion              |\n");
    printf("|    3.Search                |\n");
    printf("|    4.Exit                  |\n");
    printf("------------------------------\n");

    while(1)
    {
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\n---Insertion Implementation---\n\n");
            printf("Enter the Size of the Array: ");
            scanf("%d", &isize);
            printf("\nEnter %d Elements of the Array:\n",isize);

            for(i=0; i<isize; i++)
                {
                    scanf("%d", &arr[i]);
                }

            printf("\nEnter the Element to Insert: ");
            scanf("%d", &num);
            printf("\nEnter the Element to Position: ");
            scanf("%d", &ipos);

            if(ipos > isize+1 || ipos <= 0)
                {
                    printf("Invalid Position! Please enter Position between 1 to %d", isize);
                }
            else
                {
                    for(i=isize; i>=ipos; i--)
                    {
                        arr[i] = arr[i-1];
                    }

                    arr[ipos-1] = num;
                    isize++;
                    printf("\n---INSERTION IMPLEMENTATION OUTPUT---\n\n");
                    printf("The Array Elements After Insertion: ");

                    for(i=0; i<isize; i++)
                        {
                            printf("%d ", arr[i]);
                        }
                }

            break;

        case 2:
            printf("\n\n---Deletion Implementation---\n\n");
            printf("Enter the Size of the Array: \n");
            scanf("%d", &dsize);
            printf("\nEnter %d Elements of the Array: \n", dsize);

            for(j = 0; j < dsize; j++)
                scanf("%d", &arr[j]);

            printf("\nEnter the Position to Delete Element: ");
            scanf("%d", &dpos);

            if (dpos >= dsize+1)
                printf("\nDeletion not possible.\n");
            else
                {
                    for(j = dpos - 1; j < dsize - 1; j++)
                        arr[j] = arr[j+1];

                    printf("\n---DELETION IMPLEMENTATION OUTPUT---\n\n");
                    printf("The Array Elements After Deletion: ");

                    for(j = 0; j < dsize - 1; j++)
                        printf("%d ", arr[j]);
                }

            break;

        case 3:
            printf("\n---Search Implementation---\n\n");
            printf("Enter the Size of the Array:\n");
            scanf("%d", &sesize);
            printf("\nEnter %d Elements of the Array:\n",sesize);

            for(k=0; k<sesize; k++)
                {
                    scanf("%d", &arr[k]);
                }

                printf("\nEnter the Element to Search: ");
                scanf("%d", &findElement);
                found = 0;

            for(k=0; k<sesize; k++)
                {
                    if(arr[k] == findElement)
                    {
                        found = 1;
                        break;
                    }
                }

            if(found == 1)
                {
                    printf("\n---SEARCH IMPLEMENTATION OUTPUT---\n\n");
                    printf("%d is Found at Position %d\n", findElement, k + 1);
                }
        else
                {
                    printf("\n---SEARCH IMPLEMENTATION OUTPUT---\n\n");
                    printf("%d is not Found in the Array\n", findElement);
                }

        break;

        case 4:
            printf("\nProgram Exit Successfully.\n");
            exit(1);

        default:
            printf("Wrong Choice!\n\n");
    }
    }
}
