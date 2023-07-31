#include <stdio.h>

int main()
{

    int no, posc = 0, negc = 0, zerc = 0, C = 0;

    while (C < 10)
    {
        printf("Enter a number");
        scanf("%d", &no);

        if (no < 0)
        {
            ++negc;
        }
        else if (no > 0)
        {
            ++posc;
        }
        else if (no == 0)
        {
            ++zerc;
        }
        ++C;
    }

    printf("%d is positive\n%d is negative\n%d is zeros", posc, negc, zerc);
}
