#include <stdio.h>

int main() {
    float radius, height, volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    volume = 3.14 * radius * radius * height;

    printf("Volume of Cylinder = %.2f\n", volume);

    return 0;
}
