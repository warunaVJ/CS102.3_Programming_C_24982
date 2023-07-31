#include <stdio.h>

int main()
{
    int no1, no2;

    printf("Enter the first number: ");
    scanf("%d", &no1);

    printf("Enter the second number: ");
    scanf("%d", &no2);

    if (no1 > no2)
        {
        printf("The highest number is: %d\n", no1);
    }
    else if (no2 > no1)
        {
        printf("The highest number is: %d\n", no2);
    }
    else
        {
        printf("Both numbers are equal.\n");
    }

}
