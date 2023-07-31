#include <stdio.h>

int main()
{
    int no1, tot, C;

    printf("Enter a numerical value to find the factorial of: ");
    scanf("%d", &no1);

    tot = no1;
    C = no1;

    if (C > 1)
    {
        while (C > 1)
        {
            --C;
            tot *= C;
        }
        printf("The value for %d! would be: %d", no1, tot);
    }
    else
    {
        printf("The value for %d! would be: %d", no1, tot);
    }
}
