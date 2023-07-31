#include <stdio.h>
#include <math.h>

int main()
{
    int C, no1 = 0, no2 = 1, extra, n = 10;

    printf("Fibonacci Sequence: ");

    for (C = 1; C <= n; ++C) {
        printf("%d, ", no1);
        extra = no1 + no2;
        no1 = no2;
        no2 = extra;
    }
}
