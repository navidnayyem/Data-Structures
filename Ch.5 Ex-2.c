#include <stdio.h>

int main(void)
{
    int n,n2 = 0;
    printf("TABLE OF N AND N^2\n\n");
    printf(" N   N^2 \n");
    printf("--- -----\n");
    for(n=1;n<=10;++n)
        {
            n2 = n*n;
            printf("%2i    %i\n", n, n2);
        }
    return 0;
}
