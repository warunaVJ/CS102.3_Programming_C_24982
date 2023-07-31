#include <stdio.h>
int main()
 {
    float faren, cel;

    printf("Enter temperature in degrees Fahrenheit: ");
    scanf("%f", &faren);

    cel =(faren- 32)*5/9;
    printf("Temperature in degrees Celsius: %.2f\n", cel);
}
