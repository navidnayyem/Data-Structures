#include <stdio.h>

int main(void)
{
    int F;
    double C;
    F = 27;
    C = (F - 32) / 1.8;
    printf("27 Degree Fahrenheit(F) to Degree Celsius(C): %0.1lf\n", C);

    return 0;
}
