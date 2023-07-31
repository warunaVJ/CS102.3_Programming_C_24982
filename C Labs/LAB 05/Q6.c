#include <stdio.h>
#include <math.h>

int main()
{
    int no, exponent, C = 0, tot, extra;

    printf("Enter a numerical value: ");
    scanf("%d", &no);
    printf("Enter a exponent value: ");
    scanf("%d", &exponent);

    C += exponent;
    extra = no;

    if (C == 1)
    {
        printf("%d, is the output.", no);
    }
    else if (C == 0)
    {
        printf("1, is the output.");
    }
    else if (C >1)
    {
        while (C > 1)
        {
            extra = extra * no;
            --C;
        }
        printf("%d, is the output.", extra);
    }
    else
    {
        printf("Something went wrong.");
    }
}
