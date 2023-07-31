#include <stdio.h>

int main()
{

    int no, V = 2, i = 0;

    printf("Enter a numerical value: ");
    scanf("%d", &no);


    while (V < no)
    {
        if ((no % V) == 0)
        {
            ++i;
            break;
        }
        else if ((no % V) > 0)
        {
            ++V;
        }
    }

    if ((no <= 1)&&(no >= 0))
    {
        printf("%d is not a prime value", no);
    }
    else if (no == 2)
    {
        printf("%d is a prime value", no);
    }
    else if (i > 0)
    {
        printf("%d is not a prime value", no);
    }
    else
    {
        printf("%d is a prime value", no);
    }
}
