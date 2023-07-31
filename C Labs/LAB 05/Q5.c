#include <stdio.h>
#include <math.h>

int main()
{
    int no, reversedNum = 0, R;

    printf("Enter a numerical value: ");
    scanf("%d", &no);

    while(no != 0)
        {
        R = no % 10;
        reversedNum = (reversedNum * 10)+ R;
        no /= 10;
        }
    printf("Reversed Number: %d", reversedNum);
}
