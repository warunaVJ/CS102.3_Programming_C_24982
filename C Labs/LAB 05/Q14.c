#include <stdio.h>

int main()
{
    int arr[10];
    int i, evenc = 0;

    for (i = 0; i <= 9; ++i)

    {
        printf("Enter user inputs: ");
        scanf("%d", &arr[i]);

        if ((arr[i]%2) == 0)
        {
            ++evenc;
        }
    }

    for (i = 0; i <= 9; ++i)
    {
        printf("%d, ", arr[i]);
    }

    printf("\n%d", evenc);
}
