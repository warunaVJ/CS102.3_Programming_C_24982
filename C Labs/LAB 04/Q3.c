#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double radi;
    int inp;
    double extra;

    printf("Hello, there enter which option you prefer:\n 1. Circumference of a circle \n 2. Area of a circle \n 3. Volume of a circle \n");
    scanf("%d", &inp);

    switch (inp)
    {
        case 1:
            printf("Enter the radius: ");
            scanf("%lf", &radi);
            printf("2 x %.5lf x %.2lf :\n------------\n%.2lf\n------------", pi, radi, 2*pi*radi);
            break;
        case 2:
            printf("Enter the radius: ");
            scanf("%lf", &radi);
            printf("%.5lf x %.2lf^2 :\n------------\n%.2lf\n------------", pi, radi, pi*(radi*radi));
            break;
        case 3:
            printf("Enter the radius: ");
            scanf("%lf", &radi);
            extra = 4/3;
            printf("4/3 x %.5lf x %.2lf^3 :\n------------\n%.2lf\n------------", pi, radi, extra*pi*(radi*radi*radi));
            break;
        default:
            printf("The entered option doesn't exist.");
            break;
    }
}
