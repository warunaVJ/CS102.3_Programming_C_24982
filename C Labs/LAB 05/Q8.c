#include <stdio.h>
#include <math.h>

int main()
{
    int no, no1, no2 = 0, R, extra;

    printf("Enter a numerical value: ");
    scanf("%d", &no);


    extra = no;

    while (no > 0)
    {
        R = no %10;
        no1 = R*R*R;
        no2 += no1;
        no /= 10;
    }

    if (extra == no2)
    {
        printf("%d is an Armstrong Number.", extra);
    }
    else if (extra != no2)
    {
        printf("The value of %d, is not an Armstrong number.", extra);
    }

}
