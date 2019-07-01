#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i, len;

  	printf("Please Enter any String: ");
  	gets(str);

  	len = strlen(str);

 	printf("\nString after Reversing : ");
  	for(i = len - 1; i >= 0; i--)
  	{
  		printf("%c", str[i]);
  	}
    printf("\n");
  	return 0;
}
