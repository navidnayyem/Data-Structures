//Q.5. Write a C program to check whether a number is Armstrong or not.

#include <stdio.h>

int main()
{
   int num,check,rem,sum = 0;
   printf("Enter a Number: ");
   scanf("%i", &num);

   check = num;
   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }

   if(sum == num)
   {
       printf("%i is an Armstrong number.", num);
   }
   else
    {
        printf("%i is not an Armstrong number.", num);
    }

   return 0;
}
