#include <stdio.h>

int main()
{
    float no1, no2;
    float avg;

    printf("Enter a number: ");
    scanf("%f", &no1);

    printf("Enter the second number: ");
    scanf("%f", &no2);

    avg = (no1 + no2) / 2;

    printf("The average is: %.2f\n", avg);
}
