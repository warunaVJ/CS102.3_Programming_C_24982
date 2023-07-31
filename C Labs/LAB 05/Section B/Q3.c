#include <stdio.h>

int main()
{

//Input price of 10 items and display the average value of an Item , number of items which the price is greater than 200.

    int price, great = 0, tot = 0, C = 1;

    while (C <= 10)
    {
        printf("Enter the price of the item %d: ", C);
        scanf("%d", &price);

        if (price > 200)
        {
            ++great;
        }

        tot += price;
        ++C;

    }

    printf("%d is the number of products greater than 200\n%.2lf is the avg", great, (double)tot/10);

}
