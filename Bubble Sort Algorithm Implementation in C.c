#include<stdio.h>

int main()
{
    int i,n,temp,j,arr[100];
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d",&n);
    printf("\nEnter the Elements:\n\n");

    for(i=0;i<n;i++)
    {
        printf("Array[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j] > arr[j+1]) //Swapping Condition is Checked
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

    printf("\nThe Sorted Array is: ");

    for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

    printf("\n");
    return 0;
}
