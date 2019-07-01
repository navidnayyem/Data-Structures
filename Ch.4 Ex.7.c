#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b;

    a = 3.31 * pow(10,-8) * 2.01 * pow(10,-7);
    b = 7.16 * pow(10,-6) + 2.01 * pow(10,-8);

    printf("(3.31 * 10^-8  *  2.01 * 10^-7) / ");
    printf("(7.16 * 10^-6  +  2.01 * 10^-8)\n\n");
    printf("Answer: %g\n", a/b);// or use %12.5e for exponential result output

    return 0;
}
