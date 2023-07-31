#include <stdio.h>

int main()
{
    float BSal;
    int YOS;
    char City;
    float additionalAllowance = 0,bonus = 0,grossRemuneration;

    printf("Enter the basic salary: ");
    scanf("%f", &BSal);

    printf("Enter the number of years of service: ");
    scanf("%d", &YOS);

    printf("Enter the city: ");
    scanf(" %c", &City);

    if (YOS > 5)
        additionalAllowance += 0.10 * BSal;
    if (City == 'C')

        additionalAllowance += 2500;
    if (BSal >= 50000)

        bonus += 0.15 * BSal;
     else if (BSal >= 25000)
        bonus += 0.12 * BSal;
     else
        bonus += 0.10 * BSal;

    grossRemuneration = BSal + additionalAllowance + bonus;

printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
}
