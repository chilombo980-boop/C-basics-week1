#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
