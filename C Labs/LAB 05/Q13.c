#include <stdio.h>

int main()
{
    int arr[10];
    int i;



    for (i = 0; i <= 9; ++i)
    {
        printf("Enter user inputs: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= 9; ++i)
    {
        printf("%d, ", arr[i]);
    }
}
