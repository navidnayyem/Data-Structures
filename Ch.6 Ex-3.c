#include <stdio.h>

int main(void)
{
    float f1, f2,total;
    printf("Please Enter the First Integer: ");
    scanf("%f", &f1);
    printf("Please Enter the Second Integer: ");
    scanf("%f", &f2);

    total = f1 / f2;

    if (f2 > 0)
    {
        printf("\n%f divided by %f gives %0.3f\n", f1, f2, total);
    }
    else
    {
        printf("\nCannot Divide by Zero.\n");
    }

    return 0;
}
