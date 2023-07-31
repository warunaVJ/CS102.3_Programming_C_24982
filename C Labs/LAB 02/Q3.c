#include <stdio.h>
int main()
{
    float dis, tt, speed;
    printf("Enter the distance traveled  ");
    scanf("%f", &dis);
    printf("Enter the time taken  ");
    scanf("%f", &tt);
    speed = dis / tt;
    printf("Average speed: %.2f \n", speed);
}
