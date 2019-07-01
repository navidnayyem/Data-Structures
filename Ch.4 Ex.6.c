#include <stdio.h>
#include <math.h>

int main (void)
{
    double x,p;
    x = 2.55;
    p = 3 * (x * x * x) - 5 * (x * x) + 6;
    printf ("3x^3 - 5x^2 + 6 = %0.2lf\n", p);

    return 0;
}
