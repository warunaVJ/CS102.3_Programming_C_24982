#include <stdio.h>

int main()
{
    int no, tot = 0;

    while (no != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &no);
        total += no;
    }

    printf("%d is the total.", tot);
}
