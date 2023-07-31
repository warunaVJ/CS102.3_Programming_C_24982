#include <stdio.h>

int main()
 {
    float R;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &R);

    printf("Diameter: %f\n", 2 * R);
    printf("Circumference: %f\n", 2 * PI * R);
    printf("Area: %f\n", PI * R * R);
}
