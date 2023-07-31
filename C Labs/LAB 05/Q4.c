#include <stdio.h>
#include <math.h>

int main()
{
    int no1, digs, div, value = 0, another = 0, org = 0;

    printf("Enter a numerical input: ");
    scanf("%d", &no1);
    printf("Enter the number of digits to consider: ");
    scanf("%d", &digs);
    org += digs;

    if (digs > 1)
    {
        int temp = no1;
        while (digs > 0)
        {
            div = pow(10, digs - 1);
            value = temp / div;
            another += value;
            temp %= div;
            --digs;
        }
        printf("%d with %d digits, would be : %d", no1, org, another);
    }
    else if (digs == 1)
    {
        printf("%d with %d digits, would be : %d", no1, org, no1);
    }
    else
    {
        printf("Invalid digits entered.");
    }

}
