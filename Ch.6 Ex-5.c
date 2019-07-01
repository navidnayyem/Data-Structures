#include <stdio.h>

int main()
{
    int number, number2, right_digit = 0;
    char minus = '-';
    printf ("Enter your number: ");
    scanf ("%i", &number);

    if(number>=0)
        {
            do
            {
                right_digit = number % 10;
                printf("%i", right_digit);
                number = number / 10;
            }
            while (number !=0);
            printf ("\n");
        }

    else
    {
        number2 = number * -1;
    do
        {
            right_digit = number2 % 10;
            printf ("%i", right_digit);
            number2 = number2 / 10;
        }

    while(number2!=0);
    printf("%c", minus);
    printf("\n");
    }

    return 0;
}
