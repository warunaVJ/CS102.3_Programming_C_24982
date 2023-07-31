#include <stdio.h>

int main()
{
    char Empname[50];
    float BSal, NSal, incre;

    printf("Enter employee name: ");
    scanf("%s", Empname);

    printf("Enter basic salary: ");
    scanf("%f", &BSal);

    if (BSal < 5000)
        incre = BSal * 0.05;
    else if (BSal < 10000)
        incre = BSal * 0.1;
    else
        incre = BSal * 0.15;

    NSal = BSal + incre;

    printf("Employee Name: %s\n", Empname);
    printf("New Salary: %.2f\n", NSal);
}
