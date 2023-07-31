#include <stdio.h>

int main()
{

    int xdup1, ydup1;

    printf("Enter the size for the arrays: ");
    scanf("%d", &xdup1);
    scanf("%d", &ydup1);

    int arr1[xdup1][ydup1];
    int arr2[xdup1][ydup1];
    int arr3[xdup1][ydup1];
    int arr4[xdup1][ydup1];

    int x,y;

    for (x = 0; x < xdup1; ++x)
    {
        for (y = 0; y < ydup1; ++y)
        {
            printf("Enter values for array 1: ");
            scanf("%d", &arr1[x][y]);
        }
    }
    for (x = 0; x < xdup1; ++x)
    {
        for (y = 0; y < ydup1; ++y)
        {
            printf("Enter values for array 2: ");
            scanf("%d", &arr2[x][y]);
        }
    }
    printf("\n");

    for (x = 0; x < xdup1; ++x)
    {
        for (y = 0; y < ydup1; ++y)
        {
            arr3[x][y] = arr1[x][y] + arr2[x][y];
            printf("%d \t", arr3[x][y]);
        }
        printf("\n");
    }
    printf("\n");


    for (x = 0; x < xdup1; ++x)
    {
        for (y = 0; y < ydup1; ++y)
        {
            arr4[x][y] = arr1[x][y] * arr2[x][y];
            printf("%d \t", arr4[x][y]);
        }
        printf("\n");
    }
    printf("\n");


    int ScalarSum = 0;
    for (x = 0; x < xdup1; ++x)
    {
        for (y = 0; y < ydup1; ++y)
        {
            ScalarSum += arr1[x][y];
        }
    }
    printf("%d Is the ScalarSum.\n", ScalarSum);

    int ScalarProd = 0;
    for (x = 0; x < xdup1; ++x)
    {
        for (y = 0; y < ydup1; ++y)
        {
            ScalarProd += arr4[x][y];
        }
    }
    printf("%d Is the ScalarProd.\n", ScalarProd);
}
