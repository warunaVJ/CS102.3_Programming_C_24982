#include <stdio.h>

int main()
{
    int no1, no2;

    printf("Enter a number: ");
    scanf("%d", &no1);

    printf("Enter the second number: ");
    scanf("%d", &no2);

    if (no1 % no2 == 0)
        {
        printf("%d is a multiple of %d\n", no1, no2);
    }
    else
    {
        printf("%d is not a multiple of %d\n", no1, no2);
    }
}
