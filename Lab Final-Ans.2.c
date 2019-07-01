//Q.2. Write a C program to implement two arrays namely Arr and RevArray. Both arrays will be of size 5. Initialize the array Arr with values of your choice.
//The task is to copy the element of Arr to RevArray in reverse order autonomously.

#include <stdio.h>
#include <string.h>

int main()
{
//  	char Arr[5]={1,2,3,4,5};
//  	char RevArray[5];
    char Arr[5];
  	int i, len;

//  	printf("Given Array: 1  2   3   4   5\n");
  	printf("Please Enter an Array of Values: ");
  	gets(Arr);

    len = strlen(Arr);

 	printf("\nArray after Reversing: ");
  	for(i=len-1;i>=0;i--)
  	{
  		printf("%c", Arr[i]);
  	}
    printf("\n");
  	return 0;
}
