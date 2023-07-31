#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;

    for (x = 1; x <= 5; ++x)
    {
        for (y = 1; y <= x; ++y)
        {
            printf("*");
        }

        printf("\n");
    }
}
