#include <stdio.h>

int main(void)
{
    int number = 0, right_digit = 0, number2 = 0, multiple = 1;
    printf("This program will convert numbers as numerals into words.\n");
    printf("\nPlease Enter a Number: ");
    scanf ("%i", &number);

    while(number != 0)
        {
            right_digit = number % 10;
            number = number / 10;
            number2 = number2 * multiple + right_digit;
            while(multiple != 10)
                {
                    multiple = multiple * 10;
                }
        }
    right_digit = 0;
    do
        {
            right_digit = number2 % 10;
            if(right_digit == 0)
            {
                printf("Zero ");
            }
            else if(right_digit == 1)
                {
                    printf("One ");
                }
            else if(right_digit == 2)
                {
                    printf("Two ");
                }
            else if(right_digit == 3)
                {
                    printf("Three ");
                }
            else if(right_digit == 4)
                {
                    printf("Four ");
                }
            else if(right_digit == 5)
                {
                    printf("Five ");
                }
            else if(right_digit == 6)
                {
                    printf("Six ");
                }
            else if(right_digit == 7)
                {
                    printf("Seven ");
                }
            else if(right_digit == 8)
                {
                    printf("Eight ");
                }
            else
                printf("Nine ");
                number2 = number2 / 10;
        }
        while(number2 != 0);
        return 0;
}
