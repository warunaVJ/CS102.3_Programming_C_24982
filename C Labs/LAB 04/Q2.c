#include <stdio.h>

int main()
{
    int no1, no2;
    char operator;

    printf("--Pick one of the following operators--\n<+> Addition\n<-> Subtraction\n</> Division\n<*> Multiplication\n---------------------------------------\n Input: ");
    scanf(" %c", &operator);
    printf("Enter a number: ");
    scanf("%d", &no1);
    printf("Enter the number 2: ");
    scanf("%d", &no2);

    switch (operator)
    {
        case '+':
            printf("%d + %d = %d", no1, no2, no1+no2);
            break;
        case '-':
            printf("%d - %d = %d", no1, no2, no1-no2);
            break;
        case '/':
            printf("%d / %d = %d", no1, no2, no1/no2);
            break;
        case '*':
            printf("%d * %d = %d", no1, no2, no1*no2);
            break;
        default:
            printf("Invalid operator.");
            break;
    }
}
