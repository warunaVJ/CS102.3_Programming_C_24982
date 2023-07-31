#include <stdio.h>

int main()
{

    int arr[10], arr2[10];
    int min = 100000000;
    int max = 0;
    int tot = 0;

    int x;

    for (x = 0; x < 10; ++x)
    {
        printf("Enter the %d value: ", x+1);
        scanf("%d", &arr[x]);

        if (arr[x] < min)
        {
            min = arr[x];
        }

        if (arr[x] > max)
        {
            max = arr[x];
        }

        tot += arr[x];
    }

    int y = 0;

    for (x = 9; x >= 0; --x)
    {
        arr2[y] = arr[x];
        ++y;
    }

    printf("%d is the minimum value.\n", min);
    printf("%d is the maximum value.\n", max);
    printf("%.1lf is the average value. \n", tot/10.0);

    for (x = 0; x < 10; ++x)
    {
        printf("%d ", arr2[x]);
    }
}
