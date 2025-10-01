#include <stdio.h>
#include <math.h>

int main(){
    double v0 = 20.0;
    double angle = 45.0;
    double g = 9.81;

    double rad = angle * M_PI / 180.0;
    double range = (v0 * v0 * sin(2 * rad)) / g;
    double height = (v0 * v0 * pow(sin(rad), 2)) / (2 * g);

    printf("Projectile Range = %.2f m\n", range);
    printf("Maximum Height = %.1f m\n", height);

    return 0;
}
